DESC vw_RRider;
SELECT * FROM vw_RRider;
DELETE FROM vw_RRider;

CREATE OR REPLACE TRIGGER io_delete
INSTEAD OF DELETE ON vw_RRider
FOR EACH ROW
BEGIN
    DELETE FROM trainer WHERE full_name = :OLD.full_name;
    DELETE FROM subject WHERE subject_name = :OLD.subject_name;
END;
/

DELETE FROM vw_RRider WHERE full_name = 'Clark Kent';