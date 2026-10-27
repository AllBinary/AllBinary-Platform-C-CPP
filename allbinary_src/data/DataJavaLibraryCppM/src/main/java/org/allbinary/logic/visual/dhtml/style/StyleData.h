
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLEDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLEDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StyleData
            : public virtual Object
         {

    private: static StyleData* instance_owner();
    private: static StyleData* instance;

    public: static StyleData* getInstance();

private: StyleData();

    public: const std::string NAME = "STYLE_NAME";

    public: const int32_t NAMEMAXLEN = 255;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLEDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLEDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLEDATA_H_COMPLETE
        
        #endif
    
