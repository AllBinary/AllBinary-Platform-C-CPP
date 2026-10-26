
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H
        #define ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VisitorInterface.h"

class Visitor
            : public Object
        : public VisitorInterface {

    private: static Visitor instance() { return Visitor(); }

    public: static Visitor getInstance();

    protected: const NullUtil nullUtil = NullUtil::getInstance();

    public: Object* visit(Object* anyType);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H
