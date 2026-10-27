
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORAVERAGE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORAVERAGE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorAverage
            : public virtual Object
         {

    private: float avgRed= 0.0;

    private: float avgGreen= 0.0;

    private: float avgBlue= 0.0;

public: ColorAverage();

    public: std::string toString();

    public: float getAvgRed();

    public: void setAvgRed(float avgRed);

    public: float getAvgGreen();

    public: void setAvgGreen(float avgGreen);

    public: float getAvgBlue();

    public: void setAvgBlue(float avgBlue);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORAVERAGE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORAVERAGE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORAVERAGE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
