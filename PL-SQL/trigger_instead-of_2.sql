DESC vw_RRider;
SELECT * FROM vw_RRider;
UPDATE vw_RRider SET full_name = 'Tony Stark' WHERE subject_name = 'Oracle';


CREATE OR REPLACE TRIGGER io_update
INSTEAD OF UPDATE ON vw_RRider
FOR EACH ROW
BEGIN
    UPDATE trainer SET full_name = :NEW.full_name
    WHERE full_name = :OLD.full_name;
    
    UPDATE subject SET subject_name = :NEW.subject_name
    WHERE subject_name = :OLD.subject_name;
END;
/

UPDATE vw_RRider SET full_name = 'Clark Kent' WHERE subject_name = 'Oracle';
SELECT * FROM trainer;
SELECT * FROM subject;