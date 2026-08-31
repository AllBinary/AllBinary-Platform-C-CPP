
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H

            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/game/resource/FeaturedResourceFactory.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "AnimationInterfaceFactoryInterface.h"
#include "BasicAnimationInterfaceFactoryInterface.h"
#include "NullAnimationFactory.h"

class FeaturedAnimationInterfaceFactoryInterfaceFactory: public FeaturedResourceFactory {
        

    private: static INSTANCE: FeaturedAnimationInterfaceFactoryInterfaceFactory = new FeaturedAnimationInterfaceFactoryInterfaceFactory();

    public static FeaturedAnimationInterfaceFactoryInterfaceFactory getInstance();

private constructor ();

                //@Throws(Exception.constructor)
            
    public Rectangle getRectangle(string resource);

                //@Throws(Exception.constructor)
            
    public Rectangle getRectangleXY(string resource, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public ProceduralAnimationInterfaceFactoryInterface getProcedural(string resource);

                //@Throws(Exception.constructor)
            
    public AnimationInterfaceFactoryInterface get(string resource);

                //@Throws(Exception.constructor)
            
    BasicAnimationInterfaceFactoryInterface getBasicAnimationInterfaceFactoryInstance(string resource);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
