/**
 * @file Iota_Device.h
 * Indicates IOTA device control Interface Functions
 */
#ifndef _IOTA_DATATRANS_H_
#define _IOTA_DATATRANS_H_

#ifdef __cplusplus
extern "C" {
#endif


#define IOTA_TOPIC_SERVICE_DATA_REPORT_RET    "IOTA_TOPIC_SERVICE_DATA_REPORT_RET"
#define IOTA_TOPIC_SERVICE_COMMAND_RECEIVE    "IOTA_TOPIC_SERVICE_COMMAND_RECEIVE"
#define IOTA_TOPIC_DATATRANS_REPORT_RSP       "IOTA_TOPIC_DATATRANS_REPORT_RSP"
#define IOTA_TOPIC_MQTT_TOPIC_SUB_RSP         "IOTA_TOPIC_MQTT_TOPIC_SUB_RSP"
#define IOTA_TOPIC_MQTT_DATA_PUB_RSP          "IOTA_TOPIC_MQTT_DATA_PUB_RSP"
#define IOTA_MSG_RECV_RSP                     "IOTA_MSG_RECV_RSP"



HW_API_FUNC HW_INT IOTA_ServiceDataReport(HW_UINT uiCookie, HW_CHAR *pcRequstId, 
            HW_CHAR *pcDeviceId, HW_CHAR *pcServiceId, HW_CHAR *pcServiceProperties);
HW_API_FUNC HW_INT IOTA_MqttDataPub(HW_UINT uiCookie, HW_UCHAR *pucTopic, HW_UINT uiQos, 
            HW_BYTES *pbstrServiceData);
HW_API_FUNC HW_INT IOTA_SubscribeTopic(HW_UINT uiCookie, HW_UCHAR *pucTopic, HW_UINT uiQos);

typedef enum enum_EN_IOTA_DATATRANS_IE_TYPE
{
    EN_IOTA_DATATRANS_IE_RESULT     = 0,//nsigned int  命令执行返回结果
    EN_IOTA_DATATRANS_IE_DEVICEID   = 1,//String        设备ID
    EN_IOTA_DATATRANS_IE_REQUESTID  = 2,//String        请求ID
    EN_IOTA_DATATRANS_IE_SERVICEID  = 3,//String        服务ID
    EN_IOTA_DATATRANS_IE_METHOD     = 4,//String        服务方法
    EN_IOTA_DATATRANS_IE_CMDCONTENT = 5,//String        命令内容
    EN_IOTA_DATATRANS_IE_MSGCONTENT = 6,//String 
    EN_IOTA_DATATRANS_IE_MSGTOPIC   = 7,//String 
}EN_IOTA_DATATRANS_IE_TYPE;

#ifdef __cplusplus
}
#endif

#endif

