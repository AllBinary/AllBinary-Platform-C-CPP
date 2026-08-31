
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/awt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorRangeInterface.h"
#include "Color.h"

class ColorRange
            : public Object
        : public ColorRangeInterface {
        

    private: minRed: int32_t;

    private: maxRed: int32_t;

    private: minGreen: int32_t;

    private: maxGreen: int32_t;

    private: minBlue: int32_t;

    private: maxBlue: int32_t;

public constructor ();

    public int32_t getMinRed();

    public setMinRed(int32_t minRed);

    public int32_t getMaxRed();

    public setMaxRed(int32_t maxRed);

    public int32_t getMinGreen();

    public setMinGreen(int32_t minGreen);

    public int32_t getMaxGreen();

    public setMaxGreen(int32_t maxGreen);

    public int32_t getMinBlue();

    public setMinBlue(int32_t minBlue);

    public int32_t getMaxBlue();

    public setMaxBlue(int32_t maxBlue);

    public bool isInRange(Color color);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_H
