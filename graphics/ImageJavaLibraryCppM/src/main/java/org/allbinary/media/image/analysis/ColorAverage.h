
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

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ColorAverage
            : public Object
         {
        

    private: avgRed: float= 0.0;

    private: avgGreen: float= 0.0;

    private: avgBlue: float= 0.0;

public constructor ();

    public string toString();

    public float getAvgRed();

    public setAvgRed(float avgRed);

    public float getAvgGreen();

    public setAvgGreen(float avgGreen);

    public float getAvgBlue();

    public setAvgBlue(float avgBlue);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORAVERAGE_H
