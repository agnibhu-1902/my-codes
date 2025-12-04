CREATE TABLE sysevent_audit
(
    event_type VARCHAR2(20),
    logon_date DATE,
    logon_time VARCHAR2(15),
    logoff_date DATE,
    logoff_time VARCHAR2(15)
);

CREATE OR REPLACE TRIGGER syslogon_audit
AFTER LOGON ON SCHEMA
BEGIN
    INSERT INTO sysevent_audit VALUES(
        ora_sysevent,
        sysdate,
        TO_CHAR(sysdate, 'hh24:mi:ss'),
        NULL,
        NULL
    );
    COMMIT;
END;
/

SELECT * FROM sysevent_audit;
DISC;
CONN;