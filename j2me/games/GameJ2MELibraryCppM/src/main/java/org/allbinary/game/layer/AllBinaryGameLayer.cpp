
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
        #include "SWTUtil.h"
#include "GameLayerUtil.h"

class AllBinaryGameLayer: public AllBinaryLayer, public ViewPositionEventListenerInterface, public OpenGLSurfaceChangedInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();

    protected: const BasicColor RED = BasicColorFactory::getInstance().RED;

    private: const Paintable paintable = SWTUtil::isSWT
                        ?       
                                class extends Paintable
                                {
                                
    const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();
    const BasicColor BLACK = BasicColorFactory::getInstance().BLACK;
    public: void paint(Graphics graphics){
this->basicSetColorUtil.setBasicColorP(graphics, this->BLACK);
    
}

                                }
                            
                                :

                            NullPaintable::getInstance();

    ;

    private: const BasicArrayList gameKeyEventList = BasicArrayListD();

public: AllBinaryGameLayer(std::string name, Rectangle layerInfo, ViewPositionBase viewPosition) : AllBinaryLayer(name, layerInfo, viewPosition){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void set(GL gl){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


    public: void move(){
}


    public: BasicArrayList getGameKeyEventList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKeyEventList;
    
}


                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager allBinaryLayerManager){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public: void onViewPositionChangeEvent(){
this->onChangeEvent(this->viewPositionEvent);
    
}


                //@Throws(Exception.constructor)
            
    public: void onChangeEvent(ViewPositionEvent layerManagerEvent){

                        if(GameLayerUtil::isOnScreen(this))
                        
                                    {
                                    this->setVisible(true);
    

                                    }
                                
                        else {
                            this->setVisible(false);
    

                        }
                            
}


    public: void paintFirst(Graphics graphics){
this->paintable.paint(graphics);
    
}


    public: void paintDebug(Graphics graphics){

    ViewPositionBase viewPosition = this->getViewPosition();;
    

    int32_t viewX = viewPosition.getX();;
    

    int32_t viewY = viewPosition.getY();;
    
this->basicSetColorUtil.setBasicColorP(graphics, this->RED);
    
graphics.drawRect(viewX, viewY, this->getWidth(), this->getHeight());
    
}


    public: void setWidth(int32_t width){
super.setLayerWidth(width);
    
this->setHalfWidth(width>>1);
    
}


    public: void setHeight(int32_t height){
super.setLayerHeight(height);
    
this->setHalfHeight(height>>1);
    
}


};

            

