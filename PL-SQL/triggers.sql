CREATE TABLE superheroes(
    sh_name VARCHAR2(20)
);
-- Example 1
SET SERVEROUTPUT ON;
CREATE OR REPLACE TRIGGER tr_superheroes
BEFORE INSERT OR DELETE OR UPDATE ON superheroes
FOR EACH ROW
ENABLE
DECLARE
    v_user VARCHAR2(20);
BEGIN
    SELECT user INTO v_user FROM dual;
    IF INSERTING THEN
        DBMS_OUTPUT.PUT_LINE('You just inserted a line Mr. ' || v_user);
    ELSIF DELETING THEN
        DBMS_OUTPUT.PUT_LINE('You just deleted a line Mr. ' || v_user);
    ELSIF UPDATING THEN
        DBMS_OUTPUT.PUT_LINE('You just updated a line Mr. ' || v_user);
    END IF;
END;
/

INSERT INTO superheroes VALUES ('Batman');
UPDATE superheroes SET sh_name = 'Superman' WHERE sh_name = 'Batman';
DELETE FROM superheroes WHERE sh_name = 'Superman';