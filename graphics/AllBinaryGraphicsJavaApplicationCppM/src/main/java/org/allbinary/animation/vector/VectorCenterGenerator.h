
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/Points.h>

      
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VectorCenterGenerator
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static BasicArrayList translate(BasicArrayList list, int32_t x, int32_t y);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    minX: int32_t = Integer.MAX_VALUE;

    minY: int32_t = Integer.MAX_VALUE;

    maxX: int32_t = Integer.MIN_VALUE;

    maxY: int32_t = Integer.MIN_VALUE;

    private: dx: int32_t = 0;

    private: dy: int32_t = 0;

    private: width: int32_t= 0;

    private: height: int32_t= 0;

public constructor ();

                //@Throws(Exception.constructor)
            
    public calculate(HashMap<any, any> hashMap);

                //@Throws(Exception.constructor)
            
    public transform(HashMap<any, any> hashMap);

                //@Throws(Exception.constructor)
            
    getInstance(BasicArrayList pointVector);

    public int32_t getWidth();

    public setWidth(int32_t width);

    public int32_t getHeight();

    public setHeight(int32_t height);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_H
