
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StyleData
            : public Object
         {

    private: static StyleData* instance() { static std::unique_ptr<StyleData> value(new StyleData()); return value.get(); }

    public: static StyleData* getInstance();

private: StyleData();

    public: const std::string NAME = "STYLE_NAME";

    public: const int32_t NAMEMAXLEN = 255;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLEDATA_H
