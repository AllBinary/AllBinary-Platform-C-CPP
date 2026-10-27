
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicAnimationInterfaceFactoryInterface;
class NullAnimationFactory;
class ResourceLoadingLevelFactory;
class Rectangle;
class RectangleFactory;
class ImageCache;
class LogUtil;
class StringMaker;
class CommonSeps;
class CommonStrings;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseResourceAnimationInterfaceFactoryInterfaceFactory
            : public virtual Object
        , public FeatureResourceAnimationInterfaceFactoryInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: ABHashtable<Object*, Object*>* hashtable;

    private: ABHashtable<Object*, Object*>* rectangleHashtable;

    private: ABHashtable<Object*, Object*>* rectangleArrayOfArraysHashtable;

    private: std::string name;

    private: bool initialized= false;

public: BaseResourceAnimationInterfaceFactoryInterfaceFactory(std::string name, ABHashtable<Object*, Object*>* hashtable, ABHashtable<Object*, Object*>* rectangleHashtable, ABHashtable<Object*, Object*>* rectangleArrayHashtable);

    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void initImageCache(ImageCache* imageCache, int32_t level);

                //@Throws(Exception.constructor)
            
    public: void add(std::string resource, BasicAnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: BasicAnimationInterfaceFactoryInterface* getBasicAnimationInterfaceFactoryInstance(std::string resource);

                //@Throws(Exception.constructor)
            
    public: Rectangle* getRectangle(std::string resource);

                //@Throws(Exception.constructor)
            
    public: void addRectangle(std::string resource, Rectangle* rectangle);

                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<Rectangle*>> getRectangleArrayOfArrays(std::string resource);

                //@Throws(Exception.constructor)
            
    public: void addRectangleArrayOfArrays(std::string resource, std::vector<std::vector<Rectangle*>> rectangleArrayOfArrays);

    public: bool isFeature();

    public: bool isLoadingLevel(int32_t level);

    public: std::string toString();

    public: ABHashtable<Object*, Object*>* getHashtable();

    public: ABHashtable<Object*, Object*>* getRectangleHashtable();

    public: ABHashtable<Object*, Object*>* getRectangleArrayOfArraysHashtable();

    /*protected*/ public: void setInitialized(bool initialized);

    public: bool isInitialized();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceLoadingLevelFactory.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/RectangleFactory.h>)
#include <org/allbinary/graphics/RectangleFactory.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h"
#endif

        #endif
    
