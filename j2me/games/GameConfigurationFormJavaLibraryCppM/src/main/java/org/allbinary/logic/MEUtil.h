
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MEUTIL_H
        #define ORG_ALLBINARY_LOGIC_MEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Item;
class CommandForm;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Handle the differences in the public platform vs the raw JS build
class MEUtil
            : public virtual Object
         {

    public: static MEUtil* getInstance();

    private: static MEUtil* instance_owner();
    private: static MEUtil* instance;


            
    public: MEUtil();
        
    public: void appendItem(CommandForm* form, Item* item);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/CommandForm.h>)
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
#endif

        #endif
    
