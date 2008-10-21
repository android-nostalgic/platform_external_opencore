/* ------------------------------------------------------------------
 * Copyright (C) 2008 PacketVideo
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 * -------------------------------------------------------------------
 */

#include "osclconfig_proc.h"

//The OsclExecSchedulerBase class provides a subset of Symbian
//CActiveScheduler functionality.

#include "oscl_scheduler.h"
#include "oscl_error.h"
#include "oscl_error_imp.h"
#include "oscl_execpanic.h"

OsclExecSchedulerBase::OsclExecSchedulerBase()
//constructor
{
}

OsclExecSchedulerBase::~OsclExecSchedulerBase()
//destructor
{
}

void OsclExecSchedulerBase::Error(int32 anError) const
//virtual method--default error handler.
{
    OSCL_UNUSED_ARG(anError);
    //"The default method raised E32User Cbase 47 panic
    PV_EXECPANIC(EExecObjectLeave);
}

void OsclExecSchedulerBase::OnStarting()
//virtual method
{
    //"The default method does nothing"
}

void OsclExecSchedulerBase::OnStopping()
//virtual method
{
    //"The default method does nothing"
}







