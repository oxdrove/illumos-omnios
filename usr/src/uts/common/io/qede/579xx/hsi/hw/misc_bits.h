/*
* CDDL HEADER START
*
* The contents of this file are subject to the terms of the
* Common Development and Distribution License, v.1,  (the "License").
* You may not use this file except in compliance with the License.
*
* You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
* or http://opensource.org/licenses/CDDL-1.0.
* See the License for the specific language governing permissions
* and limitations under the License.
*
* When distributing Covered Code, include this CDDL HEADER in each
* file and include the License file at usr/src/OPENSOLARIS.LICENSE.
* If applicable, add the following below this CDDL HEADER, with the
* fields enclosed by brackets "[]" replaced with your own identifying
* information: Portions Copyright [yyyy] [name of copyright owner]
*
* CDDL HEADER END
*/

/*
* Copyright 2014-2017 Cavium, Inc. 
* The contents of this file are subject to the terms of the Common Development 
* and Distribution License, v.1,  (the "License").

* You may not use this file except in compliance with the License.

* You can obtain a copy of the License at available 
* at http://opensource.org/licenses/CDDL-1.0

* See the License for the specific language governing permissions and 
* limitations under the License.
*/


#ifndef MISC_BITS_H
#define MISC_BITS_H

/*reset_config*/
#define MISCS_REGISTERS_RESET_CONFIG_NCSI						(0x1<<0)
#define MISCS_REGISTERS_RESET_CONFIG_UMAC						(0x1<<1)
#define MISCS_REGISTERS_RESET_CONFIG_MSTAT						(0x1<<2)
#define MISCS_REGISTERS_RESET_CONFIG_CPMU						(0x1<<3)
#define MISCS_REGISTERS_RESET_CONFIG_PXPV_AUTO_MODE					(0x1<<4)
#define MISCS_REGISTERS_RESET_CONFIG_NWM_MAC_CORE					(0x1<<5)
#define MISCS_REGISTERS_RESET_CONFIG_RSRV6						(0x1<<6)
#define MISCS_REGISTERS_RESET_CONFIG_RST_MCP_N_RESET_REG_HARD_CORE_AUTO_MODE		(0x1<<7)
#define MISCS_REGISTERS_RESET_CONFIG_RST_MCP_N_HARD_CORE_RST_B_AUTO_MODE		(0x1<<8)
#define MISCS_REGISTERS_RESET_CONFIG_RST_MCP_N_RESET_CMN_CPU_AUTO_MODE			(0x1<<9)
#define MISCS_REGISTERS_RESET_CONFIG_RST_MCP_N_RESET_CMN_CORE_AUTO_MODE			(0x1<<10)
#define MISCS_REGISTERS_RESET_CONFIG_RSRV11						(0x1<<11)
#define MISCS_REGISTERS_RESET_CONFIG_RSRV12						(0x1<<12)
#define MISCS_REGISTERS_RESET_CONFIG_RSRV13						(0x1<<13)
#define MISCS_REGISTERS_RESET_CONFIG_RST_MISC_CORE_AUTO_MODE				(0x1<<14)
#define MISCS_REGISTERS_RESET_CONFIG_RST_DBUE_AUTO_MODE					(0x1<<15)
#define MISCS_REGISTERS_RESET_CONFIG_GRC_RESET_ASSERT_ON_CORE_RST			(0x1<<16)
#define MISCS_REGISTERS_RESET_CONFIG_RST_MCP_N_RESET_CMN_CPU_ASSERT_ON_CORE_RST		(0x1<<17)
#define MISCS_REGISTERS_RESET_CONFIG_RST_MCP_N_RESET_CMN_CORE_ASSERT_ON_CORE_RST	(0x1<<18)
#define MISCS_REGISTERS_RESET_CONFIG_RST_RBCN_ASSERT_ON_CORE_RST			(0x1<<19)
#define MISCS_REGISTERS_RESET_CONFIG_NWM_CORE						(0x1<<20)
#define MISCS_REGISTERS_RESET_CONFIG_RST_MISC_CORE_ASSERT_ON_CORE_RST			(0x1<<21)
#define MISCS_REGISTERS_RESET_CONFIG_RST_DBUE_ASSERT_ON_CORE_RST			(0x1<<22)
#define MISCS_REGISTERS_RESET_CONFIG_WRAPPERS_IDDQ_AND_RST_SIGNALS_ASSERT_ON_CORE_RST	(0x1<<23)
#define MISCS_REGISTERS_RESET_CONFIG_RBCW						(0x1<<24)
#define MISCS_REGISTERS_RESET_CONFIG_RST_PGLC_AUTO_MODE					(0x1<<25)
#define MISCS_REGISTERS_RESET_CONFIG_RST_BMB_ON_CORE_RST				(0x1<<26)
#define MISCS_REGISTERS_RESET_CONFIG_RST_OPTE_ON_CORE_RST				(0x1<<27)
#define MISCS_REGISTERS_RESET_CONFIG_OPCS						(0x1<<28)
#define MISCS_REGISTERS_RESET_CONFIG_NWS	 					(0x1<<29)
#define MISCS_REGISTERS_RESET_CONFIG_MS							(0x1<<30)
#define MISCS_REGISTERS_RESET_CONFIG_LED						(0x1<<31)

/* MISCS_REG_RESET_PL_UA */
#define MISCS_REG_RESET_PL_UA_SET		(MISCS_REG_RESET_PL_UA + 4)
#define MISCS_REG_RESET_PL_UA_CLEAR		(MISCS_REG_RESET_PL_UA + 8)
#define MISCS_REG_RESET_PL_UA_RST_GRC				(0x1<<0)
#define MISCS_REG_RESET_PL_UA_RST_MCP_N_RESET_REG_HARD_CORE	(0x1<<1)
#define MISCS_REG_RESET_PL_UA_RST_MCP_N_HARD_CORE_RST_B		(0x1<<2)
#define MISCS_REG_RESET_PL_UA_RST_MCP_N_RESET_CMN_CPU		(0x1<<3)
#define MISCS_REG_RESET_PL_UA_RST_MCP_N_RESET_CMN_CORE		(0x1<<4)
#define MISCS_REG_RESET_PL_UA_RST_MISC_CORE			(0x1<<5)
#define MISCS_REG_RESET_PL_UA_RST_DBUE_UART			(0x1<<6)
#define MISCS_REG_RESET_PL_UA_RST_BMB				(0x1<<7)
#define MISCS_REG_RESET_PL_UA_RST_IPC				(0x1<<8)
#define MISCS_REG_RESET_PL_UA_RST_CRBCN				(0x1<<9)

#define MISCS_REG_RESET_PL_UA_PROCESS_KILL (0x0)

#define MISCS_REG_RESET_PL_HV_SET		(MISCS_REG_RESET_PL_HV + 4)
#define MISCS_REG_RESET_PL_HV_CLEAR		(MISCS_REG_RESET_PL_HV + 8)
#define MISCS_REG_RESET_PL_HV_RST_CNIG		(0x1<<0)
#define MISCS_REG_RESET_PL_HV_RST_PGLC		(0x1<<1)
#define MISCS_REG_RESET_PL_HV_RST_PXPV		(0x1<<2)
#define MISCS_REG_RESET_PL_HV_RST_CRBCH       	(0x1<<3)
#define MISCS_REG_RESET_PL_HV_RST_OPTE       	(0x1<<4)
#define MISCS_REG_RESET_PL_HV_RST_NCSI       	(0x1<<5)
#define MISCS_REG_RESET_PL_HV_RST_UMAC      	(0x1<<6)
#define MISCS_REG_RESET_PL_HV_RST_MSTAT      	(0x1<<7)
#define MISCS_REG_RESET_PL_HV_RST_CPMU      	(0x1<<8)
#define MISCS_REG_RESET_PL_HV_RST_RSRV     	(0x1<<9)
#define MISCS_REG_RESET_PL_HV_RST_RBCW      	(0x1<<10)
#define MISCS_REG_RESET_PL_HV_RST_OPCS      	(0x1<<11)
#define MISCS_REG_RESET_PL_HV_RST_NWS      	(0x1<<12)
#define MISCS_REG_RESET_PL_HV_RST_MS     	(0x1<<13)
#define MISCS_REG_RESET_PL_HV_RST_LED     	(0x1<<14)



#define MISCS_REG_RESET_PL_HV_PROCESS_KILL (0x0)

/* MISC_REG_RESET_PL_UA */
#define MISC_REG_RESET_PL_UA_SET			(MISC_REG_RESET_PL_UA + 4)
#define MISC_REG_RESET_PL_UA_CLEAR			(MISC_REG_RESET_PL_UA + 8)
#define MISC_REG_RESET_PL_UA_RST_MISC_CORE		(0x1<<0)
#define MISC_REG_RESET_PL_UA_RST_GRC			(0x1<<1)
#define MISC_REG_RESET_PL_UA_RST_RBCN			(0x1<<2)
#define MISC_REG_RESET_PL_UA_RST_RBCZ			(0x1<<3)

#define MISC_REG_RESET_PL_UA_PROCESS_KILL (0x0)

/* MISC_REG_RESET_PL_HV */
#define MISC_REG_RESET_PL_HV_SET			(MISC_REG_RESET_PL_HV + 4)
#define MISC_REG_RESET_PL_HV_CLEAR			(MISC_REG_RESET_PL_HV + 8)
#define MISC_REG_RESET_PL_HV_RST_PSWHST			(0x1<<0)
#define MISC_REG_RESET_PL_HV_RST_PSWRQ			(0x1<<1)
#define MISC_REG_RESET_PL_HV_RST_PSWRD			(0x1<<2)
#define MISC_REG_RESET_PL_HV_RST_PSWWR			(0x1<<3)
#define MISC_REG_RESET_PL_HV_RST_ATC			(0x1<<4)

#define MISC_REG_RESET_PL_HV_PROCESS_KILL \
	(MISC_REG_RESET_PL_HV_RST_PSWRQ | \
	 MISC_REG_RESET_PL_HV_RST_PSWRD | \
	 MISC_REG_RESET_PL_HV_RST_PSWWR | \
	 MISC_REG_RESET_PL_HV_RST_ATC)

/* PL_HV_2 - for K2 only */
#define MISCS_REG_RESET_PL_HV_2_SET			(MISCS_REG_RESET_PL_HV_2 + 4)
#define MISCS_REG_RESET_PL_HV_2_CLEAR			(MISCS_REG_RESET_PL_HV_2 + 8)
#define MISCS_REG_RESET_PL_HV_2_RST_NWM			(1<<0)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_MAC0		(1<<1)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_MAC1		(1<<2)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_MAC2		(1<<3)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_MAC3		(1<<4)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_GPCS0		(1<<5)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_GPCS1		(1<<6)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_GPCS2		(1<<7)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_GPCS3		(1<<8)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_XPCS0		(1<<9)       	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_XPCS1		(1<<10)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_XPCS2		(1<<11)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_XPCS3		(1<<12)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_XPCS4		(1<<13)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_XPCS5		(1<<14)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_XPCS6		(1<<15)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_XPCS7		(1<<16)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_TX_LANE0	(1<<17)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_TX_LANE1	(1<<18)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_TX_LANE2	(1<<19)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_TX_LANE3	(1<<20)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_RX_LANE0	(1<<21)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_RX_LANE1	(1<<22)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_RX_LANE2	(1<<23)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_RX_LANE3	(1<<24)      	
#define MISCS_REG_RESET_PL_HV_2_RST_NWM_SDGB		(1<<25)
 

/* MISC_REG_RESET_PL_PDA_VMAIN_1 */
#define MISC_REG_RESET_PL_PDA_VMAIN_1_SET		(MISC_REG_RESET_PL_PDA_VMAIN_1 + 4)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_CLEAR		(MISC_REG_RESET_PL_PDA_VMAIN_1 + 8)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_BRB		(0x1<<0)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_PRS		(0x1<<1)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_SRC		(0x1<<2)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_TSDM		(0x1<<3)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_TSEM		(0x1<<4)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_TCM		(0x1<<5)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_RBCR		(0x1<<6)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_USDM		(0x1<<7)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_UCM		(0x1<<8)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_USEM		(0x1<<9)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_BTB		(0x1<<10)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_PBF_PB1	(0x1<<11)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_PBF_PB2       (0x1<<12)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_RPB           (0x1<<13)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_RBCU          (0x1<<14)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_PBF           (0x1<<15)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_QM            (0x1<<16)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_TM            (0x1<<17)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_DORQ          (0x1<<18)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_XCM           (0x1<<19)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_XSDM          (0x1<<20)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_XSEM          (0x1<<21)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_RBCT          (0x1<<22)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_CDU           (0x1<<23)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_CCFC          (0x1<<24)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_TCFC          (0x1<<25)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_RBCP          (0x1<<26)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_IGU           (0x1<<27)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_DMAE          (0x1<<28)
#define MISC_REG_RESET_PL_PDA_VMAIN_1_RST_SEMI_RTC      (0x1<<29)

#define MISC_REG_RESET_PL_PDA_VMAIN_1_PROCESS_KILL (~MISC_REG_RESET_PL_PDA_VMAIN_1_RST_IGU)

/* MISC_REG_RESET_PL_PDA_VMAIN_2 */
#define MISC_REG_RESET_PL_PDA_VMAIN_2_SET		(MISC_REG_RESET_PL_PDA_VMAIN_2 + 4)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_CLEAR		(MISC_REG_RESET_PL_PDA_VMAIN_2 + 8)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RBCF		(0x1<<0)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RBCX		(0x1<<1)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RBCS		(0x1<<2)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_MCM		(0x1<<3)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_PCM		(0x1<<4)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_YCM		(0x1<<5)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_MSDM		(0x1<<6)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_YSDM		(0x1<<7)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_PSDM		(0x1<<8)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_MSEM		(0x1<<9)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_YSEM		(0x1<<10)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_PSEM		(0x1<<11)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_XYLD		(0x1<<12)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_TMLD		(0x1<<13)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_MULD		(0x1<<14)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_YULD		(0x1<<15)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RDIF		(0x1<<16)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_TDIF		(0x1<<17)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RSS		(0x1<<18)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_CAU		(0x1<<19)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_PTU		(0x1<<20)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_PRM		(0x1<<21)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RBCY		(0x1<<22)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RBCQ		(0x1<<23)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RBCM		(0x1<<24)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RBCB		(0x1<<25)
#define MISC_REG_RESET_PL_PDA_VMAIN_2_RST_RBCV		(0x1<<26)

#define MISC_REG_RESET_PL_PDA_VMAIN_2_PROCESS_KILL (0x3FFFFF)

/* MISC_REG_RESET_PL_PDA_VAUX */
#define MISC_REG_RESET_PL_PDA_VAUX_SET  		(MISC_REG_RESET_PL_PDA_VAUX + 4)
#define MISC_REG_RESET_PL_PDA_VAUX_CLEAR		(MISC_REG_RESET_PL_PDA_VAUX + 8)
#define MISC_REG_RESET_PL_PDA_VAUX_RST_NIG		(0x1<<0)    
#define MISC_REG_RESET_PL_PDA_VAUX_RST_RBCH    		(0x1<<1)    
#define MISC_REG_RESET_PL_PDA_VAUX_RST_NIG_HARD		(0x1<<2)    
#define MISC_REG_RESET_PL_PDA_VAUX_RST_DBG		(0x1<<3)    
#define MISC_REG_RESET_PL_PDA_VAUX_RST_XMAC		(0x1<<4)    
#define MISC_REG_RESET_PL_PDA_VAUX_RST_XMAC_SOFT	(0x1<<5)    
#define MISC_REG_RESET_PL_PDA_VAUX_RST_MSTAT_NW		(0x1<<6)
#define MISC_REG_RESET_PL_PDA_VAUX_RST_WOL		(0x1<<7)
#define MISC_REG_RESET_PL_PDA_VAUX_RST_WOL_HARD		(0x1<<8)

#define MISC_REG_RESET_PL_PDA_VAUX_PROCESS_KILL \
	 (MISC_REG_RESET_PL_PDA_VAUX_RST_NIG | \
	  MISC_REG_RESET_PL_PDA_VAUX_RST_NIG_HARD )
	  
#define MISC_REG_RESET_BLOCKS(path, _reg_, _bits_) \
	 do { \
		REG_WRITE(path, _reg_ ## _CLEAR, _bits_); \
		REG_WRITE(path, _reg_ ## _SET, _bits_); \
	 } while (0)
/* MISCS_REG_VAUX_EN_DIS */
#define MISCS_VAUX_VALUE		(0x3L<<0)
#define MISCS_VAUX_VALUE_POS		0
#define MISCS_VAUX_SET			(0x3L<<2)
#define MISCS_VAUX_SET_POS		2
#define MISCS_VAUX_CLR			(0x3L<<4)
#define MISCS_VAUX_CLR_POS		4
#define MISCS_VAUX_FLOAT		(0x3L<<6)
#define MISCS_VAUX_FLOAT_POS		6

/* VAUX_EN_DIS pin assignment */
#define MISCS_VAUX_EN_L			0x1   /* Bit 0 */
#define MISCS_VAUX_DIS_L		0x2   /* Bit 1 */

#define MISCS_MAIN_SEQ_BYP_SEL_VAUX_B		(1<<4)
/////////////////////////
// HW Lock Definitions //
/////////////////////////

// Masters
#define HW_LOCK_MASTER_FUNC_0                    0
#define HW_LOCK_MASTER_FUNC_1                    1
#define HW_LOCK_MASTER_FUNC_2                    2
#define HW_LOCK_MASTER_FUNC_3                    3
#define HW_LOCK_MASTER_FUNC_4                    4
#define HW_LOCK_MASTER_FUNC_5                    5
#define HW_LOCK_MASTER_FUNC_6                    6
#define HW_LOCK_MASTER_FUNC_7                    7
#define HW_LOCK_MASTER_RESERVED_8                8
#define HW_LOCK_MASTER_RESERVED_9                9
#define HW_LOCK_MASTER_RESERVED_10               10
#define HW_LOCK_MASTER_RESERVED_11               11
#define HW_LOCK_MASTER_RESERVED_12               12
#define HW_LOCK_MASTER_HOST_SCRIPTS              13
#define HW_LOCK_MASTER_MCP_RESET                 14
#define HW_LOCK_MASTER_MCP                       15

// Resources
#define HW_LOCK_RESOURCE_RESERVED_0              (1 << 0)
#define HW_LOCK_RESOURCE_RESERVED_1              (1 << 1)
#define HW_LOCK_RESOURCE_RESERVED_2              (1 << 2)
#define HW_LOCK_RESOURCE_RESERVED_3              (1 << 3)
#define HW_LOCK_RESOURCE_RESERVED_4              (1 << 4)
#define HW_LOCK_RESOURCE_RESERVED_5              (1 << 5)
#define HW_LOCK_RESOURCE_RESERVED_6              (1 << 6)
#define HW_LOCK_RESOURCE_RESERVED_7              (1 << 7)
#define HW_LOCK_RESOURCE_RESERVED_8              (1 << 8)
#define HW_LOCK_RESOURCE_RESERVED_9              (1 << 9)
#define HW_LOCK_RESOURCE_RESERVED_10             (1 << 10)
#define HW_LOCK_RESOURCE_RESERVED_11             (1 << 11)
#define HW_LOCK_RESOURCE_RESERVED_12             (1 << 12)
#define HW_LOCK_RESOURCE_RESERVED_13             (1 << 13)
#define HW_LOCK_RESOURCE_RESERVED_14             (1 << 14)
#define HW_LOCK_RESOURCE_RESERVED_15             (1 << 15)
#define HW_LOCK_RESOURCE_RESERVED_16             (1 << 16)
#define HW_LOCK_RESOURCE_RESERVED_17             (1 << 17)
#define HW_LOCK_RESOURCE_RESERVED_18             (1 << 18)
#define HW_LOCK_RESOURCE_RESERVED_19             (1 << 19)
#define HW_LOCK_RESOURCE_RESERVED_20             (1 << 20)
#define HW_LOCK_RESOURCE_RESERVED_21             (1 << 21)
#define HW_LOCK_RESOURCE_RESERVED_22             (1 << 22)
#define HW_LOCK_RESOURCE_RESERVED_23             (1 << 23)
#define HW_LOCK_RESOURCE_RESERVED_24             (1 << 24)
#define HW_LOCK_RESOURCE_RESERVED_25             (1 << 25)
#define HW_LOCK_RESOURCE_RESERVED_26             (1 << 26)
#define HW_LOCK_RESOURCE_OEM_0                   (1 << 27)
#define HW_LOCK_RESOURCE_OEM_1                   (1 << 28)
#define HW_LOCK_RESOURCE_OEM_2                   (1 << 29)
#define HW_LOCK_RESOURCE_OEM_3                   (1 << 30)
#define HW_LOCK_RESOURCE_OEM_4                   (1 << 31)
#define HW_LOCK_MAX_RESOURCE_VALUE               (31)


/////////////////////////
// CHIP DEF Definitions //
/////////////////////////
#define MISCS_REG_CHIP_NUM_K2_DRVSIM			0x1628
#define MISCS_REG_CHIP_NUM_BB_DRVSIM			0x1629

#define MISCS_REG_CHIP_NUM_K2				0x1630
#define MISCS_REG_CHIP_NUM_BB				0x1634
#define MISCS_REG_CHIP_NUM_BB_T				0x1635


#define CHIP_IS_BB(chip_num) ((chip_num == MISCS_REG_CHIP_NUM_BB_DRVSIM) || (chip_num == MISCS_REG_CHIP_NUM_BB) || (chip_num == MISCS_REG_CHIP_NUM_BB_T))
#define CHIP_IS_K2(chip_num) ((chip_num == MISCS_REG_CHIP_NUM_K2_DRVSIM) || (chip_num == MISCS_REG_CHIP_NUM_K2))

#define MISCS_REG_AVS_PVTMON_DACCODE_VMAIN_DAC_CODE_MASK 	0x000003ff
#define MISCS_REG_AVS_PVTMON_DACCODE_VMAIN_DAC_CODE_SHIFT 	0
#define MISCS_REG_AVS_PVTMON_DACCODE_VMAIN_DAC_OVERRIDE_MASK 	0x00000400
#define MISCS_REG_AVS_PVTMON_DACCODE_VMAIN_DAC_OVERRIDE_SHIFT 	10
#define MISCS_REG_AVS_PVTMON_DACCODE_VMGMT_DAC_CODE_MASK 	0x001ff800
#define MISCS_REG_AVS_PVTMON_DACCODE_VMGMT_DAC_CODE_SHIFT 	11
#define MISCS_REG_AVS_PVTMON_DACCODE_VMGMT_DAC_OVERRIDE_MASK 	0x00200000
#define MISCS_REG_AVS_PVTMON_DACCODE_VMGMT_DAC_OVERRIDE_SHIFT 	21
/* 
 * Secured Mode Definitions
 */
enum secure_modes {
	SECURITY_MODE_NON_SECURED_MODE = 0,
	SECURITY_MODE_SECURED_MODE = 1,
	SECURITY_MODE_FULLY_SECURED_MODE = 2
};

#define MISCS_REG_MFW_SECURITY_MODE_SOURCE_MASK		(0x1)
#define MISCS_REG_MFW_SECURITY_MODE_SOURCE_SHIFT	(0)
#define MISCS_REG_MFW_SECURITY_MODE_SOURCE_EXT_PIN	(0)
#define MISCS_REG_MFW_SECURITY_MODE_SOURCE_OVERRIDE	(1)

#define MISCS_REG_MFW_SECURITY_MODE_OVERRIDE_VAL_MASK	(0x6)
#define MISCS_REG_MFW_SECURITY_MODE_OVERRIDE_VAL_SHIFT	(0x1)
/* Values are SECURITY_MODE_XXX */

/* MISCS_REG_GENERIC_POR_0 definition */
#define MISCS_POR_RESET_VAL_SHIFT	0
#define MISCS_POR_RESET_VAL_MASK	0x00000001

#define MISCS_POR_CNT_SHIFT		1
#define MISCS_POR_CNT_MASK		0x00000002

#define MISCS_CORE_CNT_SHIFT		2
#define MISCS_CORE_CNT_MASK		0x000ffffc

#define MISCS_MCP_RESET_CNT_SHIFT	20
#define MISCS_MCP_RESET_CNT_MASK	0xfff00000


#define MISC_REG_BLOCK_256B_EN_K2_BRB	(1<<0)
#define MISC_REG_BLOCK_256B_EN_K2_BTB	(1<<1)
#endif // MISC_BITS_H