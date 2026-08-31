
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

public constructor (string name, Hashtable<any, any> hashtable, Hashtable<any, any> rectangleHashtable, Hashtable<any, any> rectangleArrayHashtable){

            super();
        this.hashtable= hashtable;
    
this.rectangleHashtable= rectangleHashtable;
    
this.rectangleArrayOfArraysHashtable= rectangleArrayHashtable;
    
this.name= name;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


                //@Throws(Exception.constructor)
            
    public init(int32_t level){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(new StringMaker().append("Available List of Animations: ")!.append(this.hashtable.toString())!.toString(), this, commonStrings!.INIT);
    
this.setInitialized(true);
    
}


                //@Throws(Exception.constructor)
            
    initImageCache(ImageCache imageCache, int32_t level){
}


                //@Throws(Exception.constructor)
            
    public add(string resource, BasicAnimationInterfaceFactoryInterface animationInterfaceFactoryInterface){

                        if(this.hashtable.containsKey(resource))
                        
                                    {
                                    


                            throw new Exception(new StringMaker().append("Resource Already Created: ")!.append(resource)!.toString());
                    

                                    }
                                
this.hashtable.put(resource, animationInterfaceFactoryInterface);
    
}


                //@Throws(Exception.constructor)
            
    public BasicAnimationInterfaceFactoryInterface getBasicAnimationInterfaceFactoryInstance(string resource){

    basicAnimationInterfaceFactoryInterfaceCanBeNull: any = this.hashtable.get(resource);;
    

                        if(basicAnimationInterfaceFactoryInterfaceCanBeNull == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAnimationFactory.NULL_NOT_FOR_USE_ANIMATION_FACTORY;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicAnimationInterfaceFactoryInterfaceCanBeNull as BasicAnimationInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Rectangle getRectangle(string resource){

    rectangleCanBeNull: any = this.rectangleHashtable!.get(resource);;
    

                        if(rectangleCanBeNull == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RectangleFactory.SINGLETON;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rectangleCanBeNull as Rectangle;
    
}


                //@Throws(Exception.constructor)
            
    public addRectangle(string resource, Rectangle rectangle){
this.rectangleHashtable!.put(resource, rectangle);
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<std::vector<Rectangle>> getRectangleArrayOfArrays(string resource){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rectangleArrayOfArraysHashtable!.get(resource)as std::vector<Rectangle>[];
    
}


                //@Throws(Exception.constructor)
            
    public addRectangleArrayOfArrays(string resource, std::vector<std::vector<Rectangle>> rectangleArrayOfArrays){
this.rectangleArrayOfArraysHashtable!.put(resource, rectangleArrayOfArrays);
    
}


    public bool isFeature(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isLoadingLevel(int32_t level){

    resourceLoadingLevelFactory: ResourceLoadingLevelFactory = ResourceLoadingLevelFactory.getInstance()!;;
    

                        if(level == resourceLoadingLevelFactory!.LOAD_ALL.getLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(this.constructor.name.toString()!)!.append(CommonSeps.getInstance()!.SEMICOLON)!.append(CommonSeps.getInstance()!.SPACE)!.append(this.name)!.toString();;
    
}


    public Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable;
    
}


    public Hashtable<any, any> getRectangleHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rectangleHashtable;
    
}


    public Hashtable<any, any> getRectangleArrayOfArraysHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rectangleArrayOfArraysHashtable;
    
}


    setInitialized(bool initialized){
this.initialized= initialized;
    
}


    public bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initialized;
    
}


};

            

