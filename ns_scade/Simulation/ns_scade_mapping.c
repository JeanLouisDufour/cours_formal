/* ns_scade_mapping.c */

#include "ns_scade_type.h"
#include "ns_scade_interface.h"
#include "ns_scade_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_2);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_23, 12);
DECL_SCOPE(scope_22, 6);
DECL_SCOPE(scope_21, 1);
DECL_SCOPE(scope_19, 1);
DECL_SCOPE(scope_18, 1);
DECL_SCOPE(scope_17, 1);
DECL_SCOPE(scope_16, 1);
DECL_SCOPE(scope_15, 10);
DECL_SCOPE(scope_14, 7);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_11, 1);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 10);
DECL_SCOPE(scope_6, 6);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 4);
DECL_SCOPE(scope_3, 1);
DECL_SCOPE(scope_2, 4);
DECL_SCOPE(scope_1, 15);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SSM_st_recv_msg1_and_send_msg2(void* pHandle) { return *(SSM_ST*)pHandle == SSM_st_recv_msg1_and_send_msg2; }
static int isActive_SSM_ST_SSM_st_recv_msg3(void* pHandle) { return *(SSM_ST*)pHandle == SSM_st_recv_msg3; }
static int isActive_SSM_ST__4_SSM_st_connected(void* pHandle) { return *(SSM_ST*)pHandle == _4_SSM_st_connected; }
static int isActive_SSM_TR_SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2(void* pHandle) { return *(SSM_TR*)pHandle == SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2; }
static int isActive_SSM_TR_SSM_TR_recv_msg3_connected_1_recv_msg3(void* pHandle) { return *(SSM_TR*)pHandle == SSM_TR_recv_msg3_connected_1_recv_msg3; }
static int isActive__2_SSM_ST_SSM_st_connected(void* pHandle) { return *(_2_SSM_ST*)pHandle == SSM_st_connected; }
static int isActive__2_SSM_ST_SSM_st_recv_msg2_and_send_msg3(void* pHandle) { return *(_2_SSM_ST*)pHandle == SSM_st_recv_msg2_and_send_msg3; }
static int isActive__2_SSM_ST_SSM_st_send_msg1(void* pHandle) { return *(_2_SSM_ST*)pHandle == SSM_st_send_msg1; }
static int isActive__3_SSM_TR_SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3(void* pHandle) { return *(_3_SSM_TR*)pHandle == SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3; }
static int isActive__3_SSM_TR_SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1(void* pHandle) { return *(_3_SSM_TR*)pHandle == SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1; }
static int isActive_agent_Alice(void* pHandle) { return *(agent*)pHandle == Alice; }
static int isActive_agent_Bob(void* pHandle) { return *(agent*)pHandle == Bob; }
static int isActive_agent_Intruder(void* pHandle) { return *(agent*)pHandle == Intruder; }
static int isActive_i_action_Erase(void* pHandle) { return *(i_action*)pHandle == Erase; }
static int isActive_i_action_Memo(void* pHandle) { return *(i_action*)pHandle == Memo; }
static int isActive_i_action_Msg1Fake_for_A(void* pHandle) { return *(i_action*)pHandle == Msg1Fake_for_A; }
static int isActive_i_action_Msg1Fake_for_B(void* pHandle) { return *(i_action*)pHandle == Msg1Fake_for_B; }
static int isActive_i_action_Msg1_for_A(void* pHandle) { return *(i_action*)pHandle == Msg1_for_A; }
static int isActive_i_action_Msg1_for_B(void* pHandle) { return *(i_action*)pHandle == Msg1_for_B; }
static int isActive_i_action_Msg3_for_A(void* pHandle) { return *(i_action*)pHandle == Msg3_for_A; }
static int isActive_i_action_Msg3_for_B(void* pHandle) { return *(i_action*)pHandle == Msg3_for_B; }
static int isActive_i_action_No_action(void* pHandle) { return *(i_action*)pHandle == No_action; }
static int isActive_i_action_Reuse_for_A(void* pHandle) { return *(i_action*)pHandle == Reuse_for_A; }
static int isActive_i_action_Reuse_for_B(void* pHandle) { return *(i_action*)pHandle == Reuse_for_B; }

/* mapping definition */

const MappingIterator iter_array_2 = { "array", 2, 2, NULL };

const MappingEntry scope_23_entries[12] = {
    /* 0 */ { MAP_LOCAL, "@active_branch", NULL, sizeof(i_action), offsetof(outC_intruder, foo_clock), &_Type_i_action_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_MATCH, "No_action:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_No_action, NULL, 1, 1 },
    /* 2 */ { MAP_MATCH, "Memo:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Memo, NULL, 1, 2 },
    /* 3 */ { MAP_MATCH, "Erase:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Erase, NULL, 1, 3 },
    /* 4 */ { MAP_MATCH, "Reuse_for_A:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Reuse_for_A, NULL, 1, 4 },
    /* 5 */ { MAP_MATCH, "Reuse_for_B:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Reuse_for_B, NULL, 1, 5 },
    /* 6 */ { MAP_MATCH, "Msg1_for_A:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Msg1_for_A, NULL, 1, 6 },
    /* 7 */ { MAP_MATCH, "Msg1_for_B:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Msg1_for_B, NULL, 1, 7 },
    /* 8 */ { MAP_MATCH, "Msg1Fake_for_A:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Msg1Fake_for_A, NULL, 1, 8 },
    /* 9 */ { MAP_MATCH, "Msg1Fake_for_B:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Msg1Fake_for_B, NULL, 1, 9 },
    /* 10 */ { MAP_MATCH, "Msg3_for_A:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Msg3_for_A, NULL, 1, 10 },
    /* 11 */ { MAP_MATCH, "Msg3_for_B:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_i_action_Msg3_for_B, NULL, 1, 11 }
};
const MappingScope scope_23 = {
    "intruder/ intruderfoo:",
    scope_23_entries, 12
};

const MappingEntry scope_22_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "msg_out", NULL, sizeof(msg), offsetof(outC_intruder, msg_out), &_Type_msg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "knowNA", NULL, sizeof(kcg_bool), offsetof(outC_intruder, knowNA), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "knowNB", NULL, sizeof(kcg_bool), offsetof(outC_intruder, knowNB), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "look", NULL, sizeof(kcg_bool), offsetof(outC_intruder, look), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "msg_memo", NULL, sizeof(msg), offsetof(outC_intruder, msg_memo), &_Type_msg_Utils, NULL, NULL, &scope_2, 1, 4 },
    /* 5 */ { MAP_WHEN, "foo:", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 5 }
};
const MappingScope scope_22 = {
    "intruder/ intruder",
    scope_22_entries, 6
};

const MappingEntry scope_21_entries[1] = {
    /* 0 */ { MAP_INSTANCE, "intruder", NULL, sizeof(outC_intruder), (size_t)&outputs_ctx.Context_intruder, NULL, &scope_4_entries[0], isActive_agent_Intruder, &scope_22, 1, 0 }
};
const MappingScope scope_21 = {
    "seq/ seqfoo:Intruder:",
    scope_21_entries, 1
};

const MappingEntry scope_19_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_15_entries[5], isActive_SSM_TR_SSM_TR_recv_msg3_connected_1_recv_msg3, NULL, 1, 0 }
};
const MappingScope scope_19 = {
    "bob/ bob:recv_msg3:<1",
    scope_19_entries, 1
};

const MappingEntry scope_18_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_15_entries[5], isActive_SSM_TR_SSM_TR_recv_msg3_connected_1_recv_msg3, &scope_19, 1, 0 }
};
const MappingScope scope_18 = {
    "bob/ bob:recv_msg3:",
    scope_18_entries, 1
};

const MappingEntry scope_17_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_15_entries[5], isActive_SSM_TR_SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2, NULL, 1, 0 }
};
const MappingScope scope_17 = {
    "bob/ bob:recv_msg1_and_send_msg2:<1",
    scope_17_entries, 1
};

const MappingEntry scope_16_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_15_entries[5], isActive_SSM_TR_SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2, &scope_17, 1, 0 }
};
const MappingScope scope_16 = {
    "bob/ bob:recv_msg1_and_send_msg2:",
    scope_16_entries, 1
};

const MappingEntry scope_15_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST), offsetof(outC_bob, state_act), &_Type_SSM_ST_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_bob, reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST), offsetof(outC_bob, state_nxt), &_Type_SSM_ST_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_bob, reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST), offsetof(outC_bob, state_sel), &_Type_SSM_ST_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR), offsetof(outC_bob, _fired_strong), &_Type_SSM_TR_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR), offsetof(outC_bob, _fired), &_Type_SSM_TR_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "recv_msg1_and_send_msg2:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_SSM_ST_SSM_st_recv_msg1_and_send_msg2, &scope_16, 1, 7 },
    /* 8 */ { MAP_STATE, "recv_msg3:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_SSM_ST_SSM_st_recv_msg3, &scope_18, 1, 8 },
    /* 9 */ { MAP_STATE, "connected:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_SSM_ST__4_SSM_st_connected, NULL, 1, 9 }
};
const MappingScope scope_15 = {
    "bob/ bob:",
    scope_15_entries, 10
};

const MappingEntry scope_14_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "msg_out", NULL, sizeof(msg), offsetof(outC_bob, msg_out), &_Type_msg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "partner", NULL, sizeof(agent), offsetof(outC_bob, partner), &_Type_agent_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "status", NULL, sizeof(kcg_bool), offsetof(outC_bob, status), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "doit", NULL, sizeof(kcg_bool), offsetof(outC_bob, doit), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "partner_memo", NULL, sizeof(agent), offsetof(outC_bob, partner_memo), &_Type_agent_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "status_memo", NULL, sizeof(kcg_bool), offsetof(outC_bob, status_memo), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_AUTOMATON, ":", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 6 }
};
const MappingScope scope_14 = {
    "bob/ bob",
    scope_14_entries, 7
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_INSTANCE, "bob", NULL, sizeof(outC_bob), (size_t)&outputs_ctx.Context_bob, NULL, &scope_4_entries[0], isActive_agent_Bob, &scope_14, 1, 0 }
};
const MappingScope scope_13 = {
    "seq/ seqfoo:Bob:",
    scope_13_entries, 1
};

const MappingEntry scope_11_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_7_entries[5], isActive__3_SSM_TR_SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3, NULL, 1, 0 }
};
const MappingScope scope_11 = {
    "alice/ alice:recv_msg2_and_send_msg3:<1",
    scope_11_entries, 1
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_7_entries[5], isActive__3_SSM_TR_SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3, &scope_11, 1, 0 }
};
const MappingScope scope_10 = {
    "alice/ alice:recv_msg2_and_send_msg3:",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_7_entries[5], isActive__3_SSM_TR_SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1, NULL, 1, 0 }
};
const MappingScope scope_9 = {
    "alice/ alice:send_msg1:<1",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_7_entries[5], isActive__3_SSM_TR_SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1, &scope_9, 1, 0 }
};
const MappingScope scope_8 = {
    "alice/ alice:send_msg1:",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_2_SSM_ST), offsetof(outC_alice, state_act), &_Type__2_SSM_ST_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_alice, reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_2_SSM_ST), offsetof(outC_alice, state_nxt), &_Type__2_SSM_ST_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_alice, reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_2_SSM_ST), offsetof(outC_alice, state_sel), &_Type__2_SSM_ST_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_3_SSM_TR), offsetof(outC_alice, _fired_strong), &_Type__3_SSM_TR_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_3_SSM_TR), offsetof(outC_alice, _fired), &_Type__3_SSM_TR_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "send_msg1:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive__2_SSM_ST_SSM_st_send_msg1, &scope_8, 1, 7 },
    /* 8 */ { MAP_STATE, "recv_msg2_and_send_msg3:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive__2_SSM_ST_SSM_st_recv_msg2_and_send_msg3, &scope_10, 1, 8 },
    /* 9 */ { MAP_STATE, "connected:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive__2_SSM_ST_SSM_st_connected, NULL, 1, 9 }
};
const MappingScope scope_7 = {
    "alice/ alice:",
    scope_7_entries, 10
};

const MappingEntry scope_6_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "msg_out", NULL, sizeof(msg), offsetof(outC_alice, msg_out), &_Type_msg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Partner", NULL, sizeof(agent), offsetof(outC_alice, Partner), &_Type_agent_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "status", NULL, sizeof(kcg_bool), offsetof(outC_alice, status), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "doit", NULL, sizeof(kcg_bool), offsetof(outC_alice, doit), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "status_memo", NULL, sizeof(kcg_bool), offsetof(outC_alice, status_memo), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_AUTOMATON, ":", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 5 }
};
const MappingScope scope_6 = {
    "alice/ alice",
    scope_6_entries, 6
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_INSTANCE, "alice", NULL, sizeof(outC_alice), (size_t)&outputs_ctx.Context_alice, NULL, &scope_4_entries[0], isActive_agent_Alice, &scope_6, 1, 0 }
};
const MappingScope scope_5 = {
    "seq/ seqfoo:Alice:",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[4] = {
    /* 0 */ { MAP_LOCAL, "@active_branch", NULL, sizeof(agent), (size_t)&inputs_ctx.a, &_Type_agent_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_MATCH, "Alice:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_agent_Alice, &scope_5, 1, 1 },
    /* 2 */ { MAP_MATCH, "Bob:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_agent_Bob, &scope_13, 1, 2 },
    /* 3 */ { MAP_MATCH, "Intruder:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_agent_Intruder, &scope_21, 1, 3 }
};
const MappingScope scope_4 = {
    "seq/ seqfoo:",
    scope_4_entries, 4
};

const MappingEntry scope_3_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(data), 0, &_Type_data_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_3 = {
    "array",
    scope_3_entries, 1
};

const MappingEntry scope_2_entries[4] = {
    /* 0 */ { MAP_FIELD, ".kind", NULL, sizeof(msg_kind), offsetof(msg, kind), &_Type_msg_kind_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".dest", NULL, sizeof(agent), offsetof(msg, dest), &_Type_agent_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".k", NULL, sizeof(key), offsetof(msg, k), &_Type_key_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".d", NULL, sizeof(array), offsetof(msg, d), &_Type_array_Utils, NULL, NULL, &scope_3, 1, 3 }
};
const MappingScope scope_2 = {
    "msg",
    scope_2_entries, 4
};

const MappingEntry scope_1_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "msg_out", NULL, sizeof(msg), (size_t)&outputs_ctx.msg_out, &_Type_msg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "partnerA", NULL, sizeof(agent), (size_t)&outputs_ctx.partnerA, &_Type_agent_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "partnerB", NULL, sizeof(agent), (size_t)&outputs_ctx.partnerB, &_Type_agent_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "statusA", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.statusA, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "statusB", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.statusB, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "knowNA", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.knowNA, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "knowNB", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.knowNB, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "secure", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.secure, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "confidential", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.confidential, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_INPUT, "a", NULL, sizeof(agent), (size_t)&inputs_ctx.a, &_Type_agent_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_INPUT, "Alice_partner", NULL, sizeof(agent), (size_t)&inputs_ctx.Alice_partner, &_Type_agent_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INPUT, "intruder_action", NULL, sizeof(i_action), (size_t)&inputs_ctx.intruder_action, &_Type_i_action_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "msg_in", NULL, sizeof(msg), (size_t)&outputs_ctx.msg_in, &_Type_msg_Utils, NULL, NULL, &scope_2, 1, 12 },
    /* 13 */ { MAP_LOCAL, "success", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.success, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_WHEN, "foo:", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 14 }
};
const MappingScope scope_1 = {
    "seq/ seq",
    scope_1_entries, 15
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "seq", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
