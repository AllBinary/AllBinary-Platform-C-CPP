
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FeatureResourceAnimationInterfaceFactoryInterface.h"

class BaseResourceAnimationInterfaceFactoryInterfaceFactory
            : public Object
        : public FeatureResourceAnimationInterfaceFactoryInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const hashtable: Hashtable<any, any>;

    private: const rectangleHashtable: Hashtable<any, any>;

    private: const rectangleArrayOfArraysHashtable: Hashtable<any, any>;

    private: const name: string;

    private: initialized: bool= false;

public constructor (string name, Hashtable<any, any> hashtable, Hashtable<any, any> rectangleHashtable, Hashtable<any, any> rectangleArrayHashtable);

    public string getName();

                //@Throws(Exception.constructor)
            
    public init(int32_t level);

                //@Throws(Exception.constructor)
            
    initImageCache(ImageCache imageCache, int32_t level);

                //@Throws(Exception.constructor)
            
    public add(string resource, BasicAnimationInterfaceFactoryInterface animationInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public BasicAnimationInterfaceFactoryInterface getBasicAnimationInterfaceFactoryInstance(string resource);

                //@Throws(Exception.constructor)
            
    public Rectangle getRectangle(string resource);

                //@Throws(Exception.constructor)
            
    public addRectangle(string resource, Rectangle rectangle);

                //@Throws(Exception.constructor)
            
    public std::vector<std::vector<Rectangle>> getRectangleArrayOfArrays(string resource);

                //@Throws(Exception.constructor)
            
    public addRectangleArrayOfArrays(string resource, std::vector<std::vector<Rectangle>> rectangleArrayOfArrays);

    public bool isFeature();

    public bool isLoadingLevel(int32_t level);

    public string toString();

    public Hashtable<any, any> getHashtable();

    public Hashtable<any, any> getRectangleHashtable();

    public Hashtable<any, any> getRectangleArrayOfArraysHashtable();

    setInitialized(bool initialized);

    public bool isInitialized();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
