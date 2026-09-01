
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPSETNOTIFIER_H
        #define ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPSETNOTIFIER_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
#include <java/net/URL.h>

      
#include <java/util/Vector.h>

      
#include <javax/help/HelpSet.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class JavaHelpSetNotifier
            : public Object
         {

    private: static Vector vector = Vector();

    private: static Vector get();

    public: static bool isNotified(HelpSet helpSet);

private: JavaHelpSetNotifier();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPSETNOTIFIER_H
