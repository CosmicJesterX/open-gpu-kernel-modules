// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "nvtypes.h"
#include "prbrt.h"
#include "g_gsp_pb.h"

// 'RpcEntry' field defaults

// 'RpcEntry' field descriptors
const PRB_FIELD_DESC prb_fields_gsp_rpcentry[] = {
    {
        1,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("historyIndex")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        2,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("function")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        3,
        {
            PRB_OPTIONAL,
            PRB_STRING,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("rpcName")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        4,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("data0")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        5,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("data1")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        6,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("startTimeStamp")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        7,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("endTimeStamp")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        8,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("duration")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
};

// 'RpcHistoryCpuToGsp' field defaults

// 'RpcHistoryCpuToGsp' field descriptors
const PRB_FIELD_DESC prb_fields_gsp_rpchistorycputogsp[] = {
    {
        1,
        {
            PRB_REPEATED,
            PRB_MESSAGE,
            0,
        },
        GSP_RPCENTRY,
        0,
        PRB_MAYBE_FIELD_NAME("rpcEntry")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
};

// 'RpcHistoryGspToCpu' field defaults

// 'RpcHistoryGspToCpu' field descriptors
const PRB_FIELD_DESC prb_fields_gsp_rpchistorygsptocpu[] = {
    {
        1,
        {
            PRB_REPEATED,
            PRB_MESSAGE,
            0,
        },
        GSP_RPCENTRY,
        0,
        PRB_MAYBE_FIELD_NAME("rpcEntry")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
};

// 'RpcDebugInfo' field defaults

// 'RpcDebugInfo' field descriptors
const PRB_FIELD_DESC prb_fields_gsp_rpcdebuginfo[] = {
    {
        1,
        {
            PRB_OPTIONAL,
            PRB_MESSAGE,
            0,
        },
        GSP_RPCENTRY,
        0,
        PRB_MAYBE_FIELD_NAME("activeRpc")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        2,
        {
            PRB_OPTIONAL,
            PRB_MESSAGE,
            0,
        },
        GSP_RPCHISTORYCPUTOGSP,
        0,
        PRB_MAYBE_FIELD_NAME("rpcHistoryCpuToGsp")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        3,
        {
            PRB_OPTIONAL,
            PRB_MESSAGE,
            0,
        },
        GSP_RPCHISTORYGSPTOCPU,
        0,
        PRB_MAYBE_FIELD_NAME("rpcHistoryGspToCpu")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
};

// 'XidReport' field defaults

// 'XidReport' field descriptors
const PRB_FIELD_DESC prb_fields_gsp_xidreport[] = {
    {
        1,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("xid")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        2,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("gpuInstance")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        3,
        {
            PRB_OPTIONAL,
            PRB_STRING,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("buildId")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        4,
        {
            PRB_OPTIONAL,
            PRB_MESSAGE,
            0,
        },
        CRASHCAT_REPORT,
        0,
        PRB_MAYBE_FIELD_NAME("crashcatReport")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        5,
        {
            PRB_OPTIONAL,
            PRB_MESSAGE,
            0,
        },
        GSP_RPCDEBUGINFO,
        0,
        PRB_MAYBE_FIELD_NAME("rpcDebugInfo")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
};

// Message descriptors
const PRB_MSG_DESC prb_messages_gsp[] = {
    {
        8,
        prb_fields_gsp_rpcentry,
        PRB_MAYBE_MESSAGE_NAME("Gsp.RpcEntry")
    },
    {
        1,
        prb_fields_gsp_rpchistorycputogsp,
        PRB_MAYBE_MESSAGE_NAME("Gsp.RpcHistoryCpuToGsp")
    },
    {
        1,
        prb_fields_gsp_rpchistorygsptocpu,
        PRB_MAYBE_MESSAGE_NAME("Gsp.RpcHistoryGspToCpu")
    },
    {
        3,
        prb_fields_gsp_rpcdebuginfo,
        PRB_MAYBE_MESSAGE_NAME("Gsp.RpcDebugInfo")
    },
    {
        5,
        prb_fields_gsp_xidreport,
        PRB_MAYBE_MESSAGE_NAME("Gsp.XidReport")
    },
};

// Service descriptors
const PRB_SERVICE_DESC prb_services_gsp[] = {
   { 0 }
};

