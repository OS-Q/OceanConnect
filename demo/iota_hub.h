/**
 * @file Iota_hub.h
 * Indicates IOTA device control Interface Functions
 */
#ifndef _IOTA_HUB_H_
#define _IOTA_HUB_H_

#ifdef __cplusplus
extern "C" {
#endif

#define IOTA_TOPIC_HUB_ADDDEV_RSP     "IOTA_TOPIC_HUB_ADDDEV_RSP"
#define IOTA_TOPIC_HUB_RMVDEV_RSP     "IOTA_TOPIC_HUB_RMVDEV_RSP"
#define IOTA_TOPIC_DEVUPDATE_RSP      "IOTA_TOPIC_DEVUPDATE_RSP"

typedef enum enum_EN_IOTA_HUB_RESULT_TYPE
{
    EN_IOTA_HUB_RESULT_SUCCESS       = 0,//���/ɾ��ִ�гɹ�
    EN_IOTA_HUB_RESULT_DEVICE_EXIST  = 1,//�豸�Ѵ���
    EN_IOTA_HUB_RESULT_DEVICE_NOTEXIST = 2,//�豸������
    EN_IOTA_HUB_RESULT_DEVICE_FAILED = 255
}EN_IOTA_HUB_RESULT_TYPE;
typedef enum enum_EN_IOTA_HUB_IE_TYPE
{
    EN_IOTA_HUB_IE_RESULT   = 0,//EN_IOTA_HUB_RESULT_TYPE ���/ɾ��ִ�н��
    EN_IOTA_HUB_IE_DEVICEID = 1,//String                               ��ӳɹ��������豸ID
}EN_IOTA_HUB_IE_TYPE;

typedef enum enum_EN_IOTA_DEVUPDATE_IE_TYPE
{
    EN_IOTA_DEVUPDATE_IE_RESULT   = 0,
    EN_IOTA_DEVUPDATE_IE_DEVICEID = 1,
}EN_IOTA_DEVUPDATE_IE_TYPE;

HW_API_FUNC HW_INT IOTA_HubDeviceAdd(HW_UINT uiCookie, ST_IOTA_DEVICE_INFO *pstInfo);
HW_API_FUNC HW_INT IOTA_HubDeviceRemove(HW_UINT uiCookie,  HW_CHAR *pucDeviceId);
HW_API_FUNC HW_INT IOTA_DeviceStatusUpdate(HW_UINT uiCookie, HW_CHAR *pcDeviceId, HW_CHAR *pcStatus, HW_CHAR *pcStatusDetail);

#ifdef __cplusplus
}
#endif

#endif
