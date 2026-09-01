
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H
        #define ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScaleProperties
            : public Object
         {

    private: static ScaleProperties instance() { return ScaleProperties(); }

    public: float scaleX= 0.0;

    public: float scaleY= 0.0;

    public: int32_t scaleWidth= 0;

    public: int32_t scaleHeight= 0;

    public: bool shouldScale= false;

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H
