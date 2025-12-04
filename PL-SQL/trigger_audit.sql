CREATE TABLE sh_audit(
    new_name VARCHAR2(30),
    old_name VARCHAR2(30),
    user_name VARCHAR2(30),
    entry_date VARCHAR2(30),
    operation VARCHAR2(30)
);

CREATE OR REPLACE TRIGGER superheroes_audit
BEFORE INSERT OR DELETE OR UPDATE ON superheroes
FOR EACH ROW
ENABLE
DECLARE
    v_user VARCHAR2(30);
    V_date VARCHAR2(30);
BEGIN
    SELECT user, TO_CHAR(sysdate, 'DD/MON/YYYY HH24:MI:SS') INTO v_user, v_date FROM dual;
    IF INSERTING THEN
        INSERT INTO sh_audit(new_name, old_name, user_name, entry_date, operation) VALUES (:NEW.sh_name, NULL, v_user, v_date, 'Insert');
    ELSIF DELETING THEN
        INSERT INTO sh_audit(new_name, old_name, user_name, entry_date, operation) VALUES (NULL, :OLD.sh_name, v_user, v_date, 'Delete');
    ELSIF UPDATING THEN
        INSERT INTO sh_audit(new_name, old_name, user_name, entry_date, operation) VALUES (:NEW.sh_name, :OLD.sh_name, v_user, v_date, 'Update');
    END IF;
END;
/

INSERT INTO superheroes VALUES ('Batman');
UPDATE superheroes SET sh_name = 'Superman' WHERE sh_name = 'Batman';
DELETE FROM superheroes WHERE sh_name = 'Superman';
SELECT * FROM sh_audit;