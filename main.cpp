
/* ================================================================ *
 *          Automatically generated by n-Blocks Studio 2.0          *
 *                                                                  *
 *                         www.n-blocks.net                         *
 * ================================================================ */
#include "nlib\nblocks.h"
#include "nlib\BSP\bsp.h"
// Custom nodes:
#include "nlib\Ticker\ticker.h"
#include "nlib\Counter\counter.h"
#include "nlib\STEPPER\STEPPER.h"
#include "nlib\StringFormat\stringformat.h"
#include "nlib\OLEDisplay\OLEDisplay.h"

// -*-*- List of node objects -*-*-
nBlock_Ticker            nb_nBlockNode0_Ticker       (1000);
nBlock_Counter           nb_nBlockNode1_Counter      (2);
nBlock_STEPPER           nb_nBlockNode2_STEPPER      (p11, p12, p13, P0_11, p26, p29, p30, p25, 0.00004, 10, 1, true);
nBlock_StringFormat      nb_nBlockNode3_StringFormat ("stop at %d\r");
nBlock_OLEDisplay        nb_nBlockNode4_OLEDisplay   (p9, p10, p27);

// -*-*- List of connection objects -*-*-
nBlockConnection    n_conn0( &nb_nBlockNode3_StringFormat, 0,    &nb_nBlockNode4_OLEDisplay,   0);
nBlockConnection    n_conn1( &nb_nBlockNode2_STEPPER,      0,    &nb_nBlockNode3_StringFormat, 0);
nBlockConnection    n_conn2( &nb_nBlockNode1_Counter,      0,    &nb_nBlockNode2_STEPPER,      0);
nBlockConnection    n_conn3( &nb_nBlockNode0_Ticker,       0,    &nb_nBlockNode1_Counter,      0);


// -*-*- Main function -*-*-
int main(void) {
    SetupWorkbench();
    while(1) {
        ProgressNodes();
        
        // Your custom code here!
    }
}
