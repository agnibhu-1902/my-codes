SHOW USER;

CREATE TABLE startup_audit
(
    event_type VARCHAR2(30),
    event_date DATE,
    event_time VARCHAR2(15)
);

CREATE OR REPLACE TRIGGER tr_st_audit
AFTER STARTUP ON DATABASE
BEGIN
    INSERT INTO startup_audit VALUES(
        ora_sysevent,
        SYSDATE,
        TO_CHAR(SYSDATE, 'hh24:mm:ss')
    );
END;
/