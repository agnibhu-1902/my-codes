SET SERVEROUTPUT ON;
DECLARE
    v_fname students.first_name%TYPE;
BEGIN
    SELECT first_name INTO v_fname FROM students WHERE stu_id = 1;
    DBMS_OUTPUT.PUT_LINE(v_fname);
END;