// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "core/libraries/error_codes.h"

// UserService library
constexpr int ORBIS_USER_SERVICE_ERROR_INTERNAL = 0x80960001;
constexpr int ORBIS_USER_SERVICE_ERROR_NOT_INITIALIZED = 0x80960002;
constexpr int ORBIS_USER_SERVICE_ERROR_ALREADY_INITIALIZED = 0x80960003;
constexpr int ORBIS_USER_SERVICE_ERROR_NO_MEMORY = 0x80960004;
constexpr int ORBIS_USER_SERVICE_ERROR_INVALID_ARGUMENT = 0x80960005;
constexpr int ORBIS_USER_SERVICE_ERROR_OPERATION_NOT_SUPPORTED = 0x80960006;
constexpr int ORBIS_USER_SERVICE_ERROR_NO_EVENT = 0x80960007;
constexpr int ORBIS_USER_SERVICE_ERROR_NOT_LOGGED_IN = 0x80960009;
constexpr int ORBIS_USER_SERVICE_ERROR_BUFFER_TOO_SHORT = 0x8096000A;
