SET SERVEROUTPUT ON;
DECLARE
    CURSOR cur_RebellionRider(var_e_id NUMBER) IS
    SELECT employee_id, first_name FROM employees
    WHERE employee_id > var_e_id;
BEGIN
    FOR L_IDX IN cur_RebellionRider(2)
    LOOP
        DBMS_OUTPUT.PUT_LINE(L_IDX.employee_id || ' ' || L_IDX.first_name);
    END LOOP;
END;
/