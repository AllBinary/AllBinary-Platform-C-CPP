
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/AllBinaryGameLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <org/allbinary/view/event/ViewPositionEvent.h>

      
#include <org/allbinary/view/event/ViewPositionEventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/game/layer/GameLayerUtil.h"


AllBinaryGameLayer::AllBinaryGameLayer(std::string name, Rectangle* layerInfo, ViewPositionBase* viewPosition) : AllBinaryLayer(name, layerInfo, viewPosition), commonStrings(CommonStrings::getInstance()), basicSetColorUtil(BasicColorSetUtil::getInstance()), RED(BasicColorFactory::getInstance()->RED), paintable(SWTUtil::isSWT
                        ?       
                                [&]() {
    static thread_local AllBinaryGameLayer* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Paintable {
    public:
    using Paintable::Paintable;
    AllBinaryGameLayer* outer = anonymousOuter0;

    BasicColorSetUtil* basicSetColorUtil = BasicColorSetUtil::getInstance();
    BasicColor* BLACK = BasicColorFactory::getInstance()->BLACK;
    public: void paint(Graphics* graphics){
this->basicSetColorUtil->setBasicColorP(graphics, this->BLACK);
    
}

    };
    return new Anonymous0();
}()
                                :

                            NullPaintable::getInstance();

    ), gameKeyEventList(new BasicArrayListD()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameLayer::set(GL* gl) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto AllBinaryGameLayer::move() -> void{
}


    auto AllBinaryGameLayer::getGameKeyEventList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKeyEventList;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameLayer::processInput(AllBinaryLayerManager* allBinaryLayerManager) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameLayer::processTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto AllBinaryGameLayer::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameLayer::onViewPositionChangeEvent() -> void{
this->onChangeEvent(this->viewPositionEvent);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameLayer::onChangeEvent(ViewPositionEvent* layerManagerEvent) -> void{

                        if(GameLayerUtil::isOnScreen(this))
                        
                                    {
                                    this->setVisible(true);
    

                                    }
                                
                        else {
                            this->setVisible(false);
    

                        }
                            
}


    auto AllBinaryGameLayer::paintFirst(Graphics* graphics) -> void{
this->paintable->paint(graphics);
    
}


    auto AllBinaryGameLayer::paintDebug(Graphics* graphics) -> void{

    ViewPositionBase* viewPosition = this->getViewPosition();;
    

    int32_t viewX = viewPosition->getX();;
    

    int32_t viewY = viewPosition->getY();;
    
this->basicSetColorUtil->setBasicColorP(graphics, this->RED);
    
graphics->drawRect(viewX, viewY, this->getWidth(), this->getHeight());
    
}


    auto AllBinaryGameLayer::setWidth(int32_t width) -> void{
AllBinaryLayer::setLayerWidth(width);
    
this->setHalfWidth(width>>1);
    
}


    auto AllBinaryGameLayer::setHeight(int32_t height) -> void{
AllBinaryLayer::setLayerHeight(height);
    
this->setHalfHeight(height>>1);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_CPP
