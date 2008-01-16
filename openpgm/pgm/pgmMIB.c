/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.notify.conf,v 5.3 2004/04/15 12:29:19 dts12 Exp $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

#include "pgm/pgmMIB.h"

static oid snmptrap_oid[] = {1, 3, 6, 1, 6, 3, 1, 1, 4, 1, 0};

int
pgm_mib_init (void)
{
/*
 * here we initialize all the tables we're planning on supporting
 */
#if 0
	initialize_table_pgmSourceTable();
	initialize_table_pgmSourceConfigTable();
	initialize_table_pgmSourcePerformanceTable();
	initialize_table_pgmReceiverTable();
	initialize_table_pgmReceiverConfigTable();
	initialize_table_pgmReceiverPerformanceTable();
#endif

	return 0;
}

int
send_pgmStart_trap( void )
{
    netsnmp_variable_list  *var_list = NULL;
    oid pgmStart_oid[] = { 1,3,6,1,3,112,2,0,1 };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
        snmptrap_oid, OID_LENGTH(snmptrap_oid),
        ASN_OBJECT_ID,
        pgmStart_oid, sizeof(pgmStart_oid));
    

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap( var_list );
    snmp_free_varbind( var_list );

    return SNMP_ERR_NOERROR;
}
int
send_pgmStop_trap( void )
{
    netsnmp_variable_list  *var_list = NULL;
    oid pgmStop_oid[] = { 1,3,6,1,3,112,2,0,2 };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
        snmptrap_oid, OID_LENGTH(snmptrap_oid),
        ASN_OBJECT_ID,
        pgmStop_oid, sizeof(pgmStop_oid));
    

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap( var_list );
    snmp_free_varbind( var_list );

    return SNMP_ERR_NOERROR;
}
int
send_pgmNewSourceTrap_trap( void )
{
    netsnmp_variable_list  *var_list = NULL;
    oid pgmNewSourceTrap_oid[] = { 1,3,6,1,3,112,2,0,3 };
    oid pgmSourceSourceGsi_oid[] = { 1,3,6,1,3,112,1,2,100,2,1,6, /* insert index here */ };
    oid pgmSourceSourcePortNumber_oid[] = { 1,3,6,1,3,112,1,2,100,2,1,7, /* insert index here */ };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
        snmptrap_oid, OID_LENGTH(snmptrap_oid),
        ASN_OBJECT_ID,
        pgmNewSourceTrap_oid, sizeof(pgmNewSourceTrap_oid));
    
    /*
     * Add any objects from the trap definition
     */
    snmp_varlist_add_variable(&var_list,
        pgmSourceSourceGsi_oid, OID_LENGTH(pgmSourceSourceGsi_oid),
        ASN_OCTET_STR,
        /* Set an appropriate value for pgmSourceSourceGsi */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmSourceSourcePortNumber_oid, OID_LENGTH(pgmSourceSourcePortNumber_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmSourceSourcePortNumber */
        NULL, 0);

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap( var_list );
    snmp_free_varbind( var_list );

    return SNMP_ERR_NOERROR;
}
int
send_pgmClosedSourceTrap_trap( void )
{
    netsnmp_variable_list  *var_list = NULL;
    oid pgmClosedSourceTrap_oid[] = { 1,3,6,1,3,112,2,0,4 };
    oid pgmSourceSourceGsi_oid[] = { 1,3,6,1,3,112,1,2,100,2,1,6, /* insert index here */ };
    oid pgmSourceSourcePortNumber_oid[] = { 1,3,6,1,3,112,1,2,100,2,1,7, /* insert index here */ };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
        snmptrap_oid, OID_LENGTH(snmptrap_oid),
        ASN_OBJECT_ID,
        pgmClosedSourceTrap_oid, sizeof(pgmClosedSourceTrap_oid));
    
    /*
     * Add any objects from the trap definition
     */
    snmp_varlist_add_variable(&var_list,
        pgmSourceSourceGsi_oid, OID_LENGTH(pgmSourceSourceGsi_oid),
        ASN_OCTET_STR,
        /* Set an appropriate value for pgmSourceSourceGsi */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmSourceSourcePortNumber_oid, OID_LENGTH(pgmSourceSourcePortNumber_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmSourceSourcePortNumber */
        NULL, 0);

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap( var_list );
    snmp_free_varbind( var_list );

    return SNMP_ERR_NOERROR;
}
int
send_pgmNewReceiverTrap_trap( void )
{
    netsnmp_variable_list  *var_list = NULL;
    oid pgmNewReceiverTrap_oid[] = { 1,3,6,1,3,112,2,0,5 };
    oid pgmReceiverSourceGsi_oid[] = { 1,3,6,1,3,112,1,3,100,2,1,8, /* insert index here */ };
    oid pgmReceiverSourcePortNumber_oid[] = { 1,3,6,1,3,112,1,3,100,2,1,9, /* insert index here */ };
    oid pgmReceiverUniqueInstance_oid[] = { 1,3,6,1,3,112,1,3,100,2,1,10, /* insert index here */ };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
        snmptrap_oid, OID_LENGTH(snmptrap_oid),
        ASN_OBJECT_ID,
        pgmNewReceiverTrap_oid, sizeof(pgmNewReceiverTrap_oid));
    
    /*
     * Add any objects from the trap definition
     */
    snmp_varlist_add_variable(&var_list,
        pgmReceiverSourceGsi_oid, OID_LENGTH(pgmReceiverSourceGsi_oid),
        ASN_OCTET_STR,
        /* Set an appropriate value for pgmReceiverSourceGsi */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverSourcePortNumber_oid, OID_LENGTH(pgmReceiverSourcePortNumber_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmReceiverSourcePortNumber */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverUniqueInstance_oid, OID_LENGTH(pgmReceiverUniqueInstance_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmReceiverUniqueInstance */
        NULL, 0);

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap( var_list );
    snmp_free_varbind( var_list );

    return SNMP_ERR_NOERROR;
}
int
send_pgmClosedReceiverTrap_trap( void )
{
    netsnmp_variable_list  *var_list = NULL;
    oid pgmClosedReceiverTrap_oid[] = { 1,3,6,1,3,112,2,0,6 };
    oid pgmReceiverSourceGsi_oid[] = { 1,3,6,1,3,112,1,3,100,2,1,8, /* insert index here */ };
    oid pgmReceiverSourcePortNumber_oid[] = { 1,3,6,1,3,112,1,3,100,2,1,9, /* insert index here */ };
    oid pgmReceiverUniqueInstance_oid[] = { 1,3,6,1,3,112,1,3,100,2,1,10, /* insert index here */ };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
        snmptrap_oid, OID_LENGTH(snmptrap_oid),
        ASN_OBJECT_ID,
        pgmClosedReceiverTrap_oid, sizeof(pgmClosedReceiverTrap_oid));
    
    /*
     * Add any objects from the trap definition
     */
    snmp_varlist_add_variable(&var_list,
        pgmReceiverSourceGsi_oid, OID_LENGTH(pgmReceiverSourceGsi_oid),
        ASN_OCTET_STR,
        /* Set an appropriate value for pgmReceiverSourceGsi */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverSourcePortNumber_oid, OID_LENGTH(pgmReceiverSourcePortNumber_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmReceiverSourcePortNumber */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverUniqueInstance_oid, OID_LENGTH(pgmReceiverUniqueInstance_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmReceiverUniqueInstance */
        NULL, 0);

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap( var_list );
    snmp_free_varbind( var_list );

    return SNMP_ERR_NOERROR;
}
int
send_pgmNakFailuresTrap_trap( void )
{
    netsnmp_variable_list  *var_list = NULL;
    oid pgmNakFailuresTrap_oid[] = { 1,3,6,1,3,112,2,0,7 };
    oid pgmReceiverSourceGsi_oid[] = { 1,3,6,1,3,112,1,3,100,2,1,8, /* insert index here */ };
    oid pgmReceiverSourcePortNumber_oid[] = { 1,3,6,1,3,112,1,3,100,2,1,9, /* insert index here */ };
    oid pgmReceiverUniqueInstance_oid[] = { 1,3,6,1,3,112,1,3,100,2,1,10, /* insert index here */ };
    oid pgmReceiverNakFailureThresholdTimer_oid[] = { 1,3,6,1,3,112,1,3,100,3,1,14, /* insert index here */ };
    oid pgmReceiverNakFailureThreshold_oid[] = { 1,3,6,1,3,112,1,3,100,3,1,15, /* insert index here */ };
    oid pgmReceiverNakFailuresLastInterval_oid[] = { 1,3,6,1,3,112,1,3,100,4,1,56, /* insert index here */ };
    oid pgmReceiverLastIntervalNakFailures_oid[] = { 1,3,6,1,3,112,1,3,100,4,1,57, /* insert index here */ };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
        snmptrap_oid, OID_LENGTH(snmptrap_oid),
        ASN_OBJECT_ID,
        pgmNakFailuresTrap_oid, sizeof(pgmNakFailuresTrap_oid));
    
    /*
     * Add any objects from the trap definition
     */
    snmp_varlist_add_variable(&var_list,
        pgmReceiverSourceGsi_oid, OID_LENGTH(pgmReceiverSourceGsi_oid),
        ASN_OCTET_STR,
        /* Set an appropriate value for pgmReceiverSourceGsi */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverSourcePortNumber_oid, OID_LENGTH(pgmReceiverSourcePortNumber_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmReceiverSourcePortNumber */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverUniqueInstance_oid, OID_LENGTH(pgmReceiverUniqueInstance_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmReceiverUniqueInstance */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverNakFailureThresholdTimer_oid, OID_LENGTH(pgmReceiverNakFailureThresholdTimer_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmReceiverNakFailureThresholdTimer */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverNakFailureThreshold_oid, OID_LENGTH(pgmReceiverNakFailureThreshold_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmReceiverNakFailureThreshold */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverNakFailuresLastInterval_oid, OID_LENGTH(pgmReceiverNakFailuresLastInterval_oid),
        ASN_COUNTER,
        /* Set an appropriate value for pgmReceiverNakFailuresLastInterval */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmReceiverLastIntervalNakFailures_oid, OID_LENGTH(pgmReceiverLastIntervalNakFailures_oid),
        ASN_COUNTER,
        /* Set an appropriate value for pgmReceiverLastIntervalNakFailures */
        NULL, 0);

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap( var_list );
    snmp_free_varbind( var_list );

    return SNMP_ERR_NOERROR;
}
int
send_pgmNewDlrSourceTrap_trap( void )
{
    netsnmp_variable_list  *var_list = NULL;
    oid pgmNewDlrSourceTrap_oid[] = { 1,3,6,1,3,112,2,0,8 };
    oid pgmDlrSourceSourceGsi_oid[] = { 1,3,6,1,3,112,1,4,100,2,1,4, /* insert index here */ };
    oid pgmDlrSourceSourcePortNumber_oid[] = { 1,3,6,1,3,112,1,4,100,2,1,5, /* insert index here */ };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
        snmptrap_oid, OID_LENGTH(snmptrap_oid),
        ASN_OBJECT_ID,
        pgmNewDlrSourceTrap_oid, sizeof(pgmNewDlrSourceTrap_oid));
    
    /*
     * Add any objects from the trap definition
     */
    snmp_varlist_add_variable(&var_list,
        pgmDlrSourceSourceGsi_oid, OID_LENGTH(pgmDlrSourceSourceGsi_oid),
        ASN_OCTET_STR,
        /* Set an appropriate value for pgmDlrSourceSourceGsi */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmDlrSourceSourcePortNumber_oid, OID_LENGTH(pgmDlrSourceSourcePortNumber_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmDlrSourceSourcePortNumber */
        NULL, 0);

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap( var_list );
    snmp_free_varbind( var_list );

    return SNMP_ERR_NOERROR;
}
int
send_pgmClosedDlrSourceTrap_trap( void )
{
    netsnmp_variable_list  *var_list = NULL;
    oid pgmClosedDlrSourceTrap_oid[] = { 1,3,6,1,3,112,2,0,9 };
    oid pgmDlrSourceSourceGsi_oid[] = { 1,3,6,1,3,112,1,4,100,2,1,4, /* insert index here */ };
    oid pgmDlrSourceSourcePortNumber_oid[] = { 1,3,6,1,3,112,1,4,100,2,1,5, /* insert index here */ };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
        snmptrap_oid, OID_LENGTH(snmptrap_oid),
        ASN_OBJECT_ID,
        pgmClosedDlrSourceTrap_oid, sizeof(pgmClosedDlrSourceTrap_oid));
    
    /*
     * Add any objects from the trap definition
     */
    snmp_varlist_add_variable(&var_list,
        pgmDlrSourceSourceGsi_oid, OID_LENGTH(pgmDlrSourceSourceGsi_oid),
        ASN_OCTET_STR,
        /* Set an appropriate value for pgmDlrSourceSourceGsi */
        NULL, 0);
    snmp_varlist_add_variable(&var_list,
        pgmDlrSourceSourcePortNumber_oid, OID_LENGTH(pgmDlrSourceSourcePortNumber_oid),
        ASN_UNSIGNED,
        /* Set an appropriate value for pgmDlrSourceSourcePortNumber */
        NULL, 0);

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap( var_list );
    snmp_free_varbind( var_list );

    return SNMP_ERR_NOERROR;
}