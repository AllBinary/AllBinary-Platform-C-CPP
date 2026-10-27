
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullAnimationFactory.h"

class FeaturedAnimationInterfaceFactoryInterfaceFactory: public FeaturedResourceFactory {

    private: static FeaturedAnimationInterfaceFactoryInterfaceFactory* INSTANCE() { static std::unique_ptr<FeaturedAnimationInterfaceFactoryInterfaceFactory> value(new FeaturedAnimationInterfaceFactoryInterfaceFactory()); return value.get(); }

    public: static FeaturedAnimationInterfaceFactoryInterfaceFactory* getInstance();

private: FeaturedAnimationInterfaceFactoryInterfaceFactory();

                //@Throws(Exception.constructor)
            
    public: Rectangle* getRectangle(std::string resource);

                //@Throws(Exception.constructor)
            
    public: Rectangle* getRectangleXY(std::string resource, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: ProceduralAnimationInterfaceFactoryInterface* getProcedural(std::string resource);

                //@Throws(Exception.constructor)
            
    public: AnimationInterfaceFactoryInterface* get(std::string resource);

                //@Throws(Exception.constructor)
            
    private: BasicAnimationInterfaceFactoryInterface* getBasicAnimationInterfaceFactoryInstance(std::string resource);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
