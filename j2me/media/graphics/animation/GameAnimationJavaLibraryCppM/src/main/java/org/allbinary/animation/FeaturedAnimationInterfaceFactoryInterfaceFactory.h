
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class FeatureResourceAnimationInterfaceFactoryInterface;
class GameConfigurationCentral;
#include <org/allbinary/game/resource/FeaturedResourceFactory.h>
class PointFactory;
class Rectangle;
class RectangleFactory;
class StringMaker;
class StringUtil;
class CommonSeps;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ProceduralAnimationInterfaceFactoryInterface;
class AnimationInterfaceFactoryInterface;
class BasicAnimationInterfaceFactoryInterface;
class NullAnimationFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FeaturedAnimationInterfaceFactoryInterfaceFactory: public FeaturedResourceFactory {

    private: static FeaturedAnimationInterfaceFactoryInterfaceFactory* INSTANCE_owner();
    private: static FeaturedAnimationInterfaceFactoryInterfaceFactory* INSTANCE;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationCentral.h>)
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>
#endif
#if __has_include(<org/allbinary/game/resource/FeaturedResourceFactory.h>)
#include <org/allbinary/game/resource/FeaturedResourceFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/RectangleFactory.h>)
#include <org/allbinary/graphics/RectangleFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif

        #endif
    
