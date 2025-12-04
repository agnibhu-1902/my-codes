SET SERVEROUTPUT ON;
DECLARE
    CURSOR cur_RebellionRider IS
    SELECT first_name, last_name FROM employees
    WHERE employee_id > 2;
BEGIN
    FOR L_IDX IN cur_RebellionRider
    LOOP
        DBMS_OUTPUT.PUT_LINE(L_IDX.first_name || ' ' || L_IDX.last_name);
    END LOOP;
END;
/