// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Public/AgoraRtcEngine.h"
/**
 * 
 */
using namespace agora::rtc;
class AGORAPLUGIN_API AgoraEventHandler : public IRtcEngineEventHandler
{
public:
	AgoraEventHandler();
	~AgoraEventHandler();

    // ע�� onJoinChannelSuccess �ص�
    // �����û��ɹ�����Ƶ��ʱ���ᴥ���ûص�;
    virtual void onJoinChannelSuccess(const char* channel, uid_t uid, int elapsed);

    // ע�� onLeaveChannel �ص���
    // �����û��ɹ��뿪Ƶ��ʱ���ᴥ���ûص���
    virtual void onLeaveChannel(const RtcStats& stat);

    // ע�� onFirstRemoteVideoDecoded �ص���
    // SDK ���յ���һ֡Զ����Ƶ���ɹ�����ʱ���ᴥ���ûص���
    // �����ڸûص��е��� setupRemoteVideo ��������Զ����ͼ��
    virtual void onFirstRemoteVideoDecoded(uid_t uid, int width, int height, int elapsed);

    // ע�� onUserOffline �ص���
    // Զ���û��뿪Ƶ�������ʱ���ᴥ���ûص���
    virtual void onUserOffline(uid_t uid, USER_OFFLINE_REASON_TYPE reason);
};
