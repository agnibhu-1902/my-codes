--Table 1
CREATE TABLE trainer
(
    full_name VARCHAR2(20)
);
--Table 2
CREATE TABLE subject
(
    subject_name VARCHAR2(20)
);

INSERT INTO trainer VALUES ('Manish Sharma');
INSERT INTO subject VALUES ('Oracle');

CREATE VIEW vw_RRider AS
SELECT full_name, subject_name FROM trainer, subject;
INSERT INTO vw_RRider VALUES ('Manish', 'Java');

CREATE OR REPLACE TRIGGER tr_io_insert
INSTEAD OF INSERT ON vw_RRider
FOR EACH ROW
BEGIN
    INSERT INTO trainer (full_name) VALUES (:NEW.full_name);
    INSERT INTO subject (subject_name) VALUES (:NEW.subject_name);
END;
/
INSERT INTO vw_RRider VALUES ('Agnibhu', 'Fortran');

SELECT * FROM trainer;
SELECT * FROM subject;