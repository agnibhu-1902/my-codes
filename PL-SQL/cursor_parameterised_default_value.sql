SET SERVEROUTPUT ON;
DECLARE
    v_name VARCHAR2(30);
    v_eid NUMBER(10);
    CURSOR cur_RebellionRider(var_e_id NUMBER := 2) IS
    SELECT first_name, employee_id FROM employees
    WHERE employee_id > var_e_id;
BEGIN
    OPEN cur_RebellionRider;
    LOOP
        FETCH cur_RebellionRider INTO v_name, v_eid;
        EXIT WHEN cur_RebellionRider%NOTFOUND;
        DBMS_OUTPUT.PUT_LINE(v_name || ' ' || v_eid);
    END LOOP;
    CLOSE cur_RebellionRider;
END;
/