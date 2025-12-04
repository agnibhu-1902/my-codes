SET SERVEROUTPUT ON;
DECLARE
    v_name VARCHAR2(30);
    CURSOR p_cur_RebellionRider (var_e_id VARCHAR2) IS
    SELECT first_name FROM employees
    WHERE employee_id < var_e_id;
BEGIN
    OPEN p_cur_RebellionRider(3);
    LOOP
        FETCH p_cur_RebellionRider INTO v_name;
        EXIT WHEN p_cur_RebellionRider%NOTFOUND;
        DBMS_OUTPUT.PUT_LINE(v_name);
    END LOOP;
    CLOSE p_cur_RebellionRider;
END;
/