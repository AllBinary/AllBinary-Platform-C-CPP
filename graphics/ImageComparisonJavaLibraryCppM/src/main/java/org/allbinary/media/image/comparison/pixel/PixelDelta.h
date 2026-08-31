
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_H

            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/media/image/comparison/color/ColorDelta.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PixelDelta
            : public Object
        : public CacheableInterface {
        

    public static any getKey(GPoint point, ColorDelta colorDelta);

    private: point: GPoint;

    private: colorDelta: ColorDelta;

    private: key: any;

public constructor (GPoint point, ColorDelta colorDelta);

    public any getKey();

    public GPoint getPoint();

    public setPoint(GPoint point);

    public ColorDelta getColorDelta();

    public setColorDelta(ColorDelta colorDelta);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_H
