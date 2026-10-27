
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_CPP
        #define ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/PartInterface.h"

auto CountedLayerInterfaceFactoryPart::NULL_COUNTED_LAYER_INTERFACE_FACTORY_owner() -> CountedLayerInterfaceFactoryPart* { static std::unique_ptr<CountedLayerInterfaceFactoryPart> value(new CountedLayerInterfaceFactoryPart(0, CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY)); return value.get(); }
CountedLayerInterfaceFactoryPart* CountedLayerInterfaceFactoryPart::NULL_COUNTED_LAYER_INTERFACE_FACTORY = CountedLayerInterfaceFactoryPart::NULL_COUNTED_LAYER_INTERFACE_FACTORY_owner();

CountedLayerInterfaceFactoryPart::CountedLayerInterfaceFactoryPart(int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) : updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), animationInterface(NullAnimationFactory::getFactoryInstance()->getInstance(0)), totalString(NullUtil::getInstance()->NULL_CHAR_ARRAY), countedPickedUpLayerInterfaceFactory(CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY){
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(1000);
    
this->init(total, countedPickedUpLayerInterfaceFactory);
    
}


    auto CountedLayerInterfaceFactoryPart::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->setXOffset(font->charsWidth(this->totalString, 0, this->primitiveLongUtil->getCurrentTotalDigits()) +(font->getSize()>>1));
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto CountedLayerInterfaceFactoryPart::init(int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) -> void{
this->setCountedPickedUpLayerInterfaceFactory(countedPickedUpLayerInterfaceFactory);
    
this->total= total;
    
}


                //@Throws(Exception.constructor)
            
    auto CountedLayerInterfaceFactoryPart::getInstance(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z) -> AllBinaryLayer*{

                        if(this->total > 0)
                        
                                    {
                                    this->setTotal(this->total -1);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getCountedPickedUpLayerInterfaceFactory()->getNextInstance(hashtable, x, y, z);;
    

                                    }
                                
                        else {
                            


                            throw Exception("No more left. Could use a listener to automatically remove");
                    

                        }
                            
}


    auto CountedLayerInterfaceFactoryPart::getTotal() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->total;
    
}


    auto CountedLayerInterfaceFactoryPart::setTotal(int32_t total) -> void{
this->total= total;
    
this->totalString= this->primitiveLongUtil->getCharArray(total);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto CountedLayerInterfaceFactoryPart::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    
}


    auto CountedLayerInterfaceFactoryPart::paintThreed(Graphics* graphics) -> void{
}


    auto CountedLayerInterfaceFactoryPart::getAnimationInterface() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    auto CountedLayerInterfaceFactoryPart::setAnimationInterface(Animation* animationInterface) -> void{
this->animationInterface= animationInterface;
    
}


    auto CountedLayerInterfaceFactoryPart::getXOffset() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->xOffset;
    
}


    auto CountedLayerInterfaceFactoryPart::setXOffset(int32_t totalStringWidth) -> void{
this->xOffset= totalStringWidth;
    
}


    auto CountedLayerInterfaceFactoryPart::getTotalString() -> std::vector<char>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalString;
    
}


    auto CountedLayerInterfaceFactoryPart::getCountedPickedUpLayerInterfaceFactory() -> CountedPickedUpLayerInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->countedPickedUpLayerInterfaceFactory;
    
}


    auto CountedLayerInterfaceFactoryPart::setCountedPickedUpLayerInterfaceFactory(CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) -> void{
this->countedPickedUpLayerInterfaceFactory= countedPickedUpLayerInterfaceFactory;
    
}




        #endif //ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_CPP
