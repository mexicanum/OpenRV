//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt__qtModule__h__
#define __MuQt__qtModule__h__
#include <iostream>
#include <Mu/Module.h>

namespace Mu
{

    class qtModule : public Module
    {
    public:
        qtModule(Context* c, const char* name = "qt");
        virtual ~qtModule();

        // TODO_QT: Remove if everything works.
        // Assuming it is not needed: qtGlobals.cpp stopped being generated
        // since Qt 4.6
        // void loadGlobals();
        virtual void load();
    };

} // namespace Mu

#endif // __MuQt__qtModule__h__
