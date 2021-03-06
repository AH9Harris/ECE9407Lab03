/*****************************************************************************
* File Name: BleProcessing.h
*
* Version: 1.0
*
* Description:
* This file declares the variables and functions for BLE functionality
* implemented as part of the PSoC 4 BLE Lab 3.
*
* Hardware Dependency:
* CY8CKIT-042 BLE Pioneer Kit
*
******************************************************************************
* Copyright (2014), Cypress Semiconductor Corporation.
******************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*****************************************************************************/
#if !defined(_BLE_PROCESSING_H)
#define _BLE_PROCESSING_H


/*****************************************************************************
* Included headers
*****************************************************************************/
#include <project.h>
#include <stdbool.h>

/*****************************************************************************
* Enum
*****************************************************************************/
#if CONNECTION_PARAM_UPDATE
typedef enum
{
    CONN_PARAM_REQUEST_NOT_SENT = 0,
    CONN_PARAM_REQUEST_SENT = 1,
    CONN_PARAM_REQUEST_ACCEPTED = 2,
    CONN_PARAM_REQUEST_REJECTED = 3
} CONN_PARAM_REQUEST_STATE;
#endif


/*****************************************************************************
* Public variables
*****************************************************************************/
extern bool enterHibernateFlag;

#if CONNECTION_PARAM_UPDATE
extern uint32 timestampWhenConnected;
extern CONN_PARAM_REQUEST_STATE connParamRequestState;
#endif 

/*****************************************************************************
* Public functions
*****************************************************************************/
extern void SendHeartRateOverBLE(void);
extern void HrsEventHandler(uint32 event, void *eventParam);
extern void GeneralEventHandler(uint32 event, void *eventParam);


#endif  

/* [] END OF FILE */
