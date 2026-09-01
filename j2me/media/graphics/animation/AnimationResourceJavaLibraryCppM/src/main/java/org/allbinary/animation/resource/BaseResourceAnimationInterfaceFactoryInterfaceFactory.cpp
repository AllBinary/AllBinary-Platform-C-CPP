
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
        



            #include <vector>
        
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: Hashtable<any, any> hashtable;

    private: Hashtable<any, any> rectangleHashtable;

    private: Hashtable<any, any> rectangleArrayOfArraysHashtable;

    private: std::string name;

    private: bool initialized= false;

public: BaseResourceAnimationInterfaceFactoryInterfaceFactory(std::string name, Hashtable<any, any> hashtable, Hashtable<any, any> rectangleHashtable, Hashtable<any, any> rectangleArrayHashtable){
this->hashtable= hashtable;
    
this->rectangleHashtable= rectangleHashtable;
    
this->rectangleArrayOfArraysHashtable= rectangleArrayHashtable;
    
this->name= name;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


                //@Throws(Exception.constructor)
            
    public: void init(int32_t level){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(StringMaker().append("Available List of Animations: ").append(this->hashtable.toString()).toString(), this, commonStrings.INIT);
    
this->setInitialized(true);
    
}


                //@Throws(Exception.constructor)
            
    protected: void initImageCache(ImageCache imageCache, int32_t level){
}


                //@Throws(Exception.constructor)
            
    public: void add(std::string resource, BasicAnimationInterfaceFactoryInterface animationInterfaceFactoryInterface){

                        if(this->hashtable.containsKey(resource))
                        
                                    {
                                    


                            throw Exception(StringMaker().append("Resource Already Created: ").append(resource).toString());
                    

                                    }
                                
this->hashtable.put(resource, animationInterfaceFactoryInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: BasicAnimationInterfaceFactoryInterface getBasicAnimationInterfaceFactoryInstance(std::string resource){

    Object* basicAnimationInterfaceFactoryInterfaceCanBeNull = this->hashtable.get(resource);;
    

                        if(basicAnimationInterfaceFactoryInterfaceCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAnimationFactory::NULL_NOT_FOR_USE_ANIMATION_FACTORY;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicAnimationInterfaceFactoryInterfaceCanBeNull as BasicAnimationInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Rectangle getRectangle(std::string resource){

    Object* rectangleCanBeNull = this->rectangleHashtable.get(resource);;
    

                        if(rectangleCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RectangleFactory::SINGLETON;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rectangleCanBeNull as Rectangle;
    
}


                //@Throws(Exception.constructor)
            
    public: void addRectangle(std::string resource, Rectangle rectangle){
this->rectangleHashtable.put(resource, rectangle);
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<Rectangle>> getRectangleArrayOfArrays(std::string resource){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangleArrayOfArraysHashtable.get(resource)as std::vector<Rectangle>[];
    
}


                //@Throws(Exception.constructor)
            
    public: void addRectangleArrayOfArrays(std::string resource, std::vector<std::vector<Rectangle>> rectangleArrayOfArrays){
this->rectangleArrayOfArraysHashtable.put(resource, rectangleArrayOfArrays);
    
}


    public: bool isFeature(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isLoadingLevel(int32_t level){

    ResourceLoadingLevelFactory resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(level == resourceLoadingLevelFactory.LOAD_ALL.getLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(this->constructor.name.toString()!).append(CommonSeps::getInstance().SEMICOLON).append(CommonSeps::getInstance().SPACE).append(this->name).toString();;
    
}


    public: Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


    public: Hashtable<any, any> getRectangleHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangleHashtable;
    
}


    public: Hashtable<any, any> getRectangleArrayOfArraysHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangleArrayOfArraysHashtable;
    
}


    protected: void setInitialized(bool initialized){
this->initialized= initialized;
    
}


    public: bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initialized;
    
}


};

            

