
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/vector/RectangleAdjustedAnimation.h>

      
#include <org/allbinary/animation/vector/RectangleFilledAdjustedAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/form/item/CommandTextItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"

class CommandCurrentSelectionForm: public ScrollCurrentSelectionForm, public UpdateMyFontInterface {

    protected: const std::vector<Animation*> selectedAnimationArray = std::vector<Animation*>(16);

    protected: const std::vector<Animation*> unSelectedAnimationArray = std::vector<Animation*>(16);

public: CommandCurrentSelectionForm(std::string title, std::vector<ABCustomItem*> items, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ScrollCurrentSelectionForm(title, items, ItemPaintableFactory::getInstance(), border,  -3, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initAnimations();
    
this->addAll(items);
    
}


    public: void updateMeasurement(Graphics* graphics){
this->updateAll(graphics, this->getAllitems());
    
super.updateMeasurement(graphics);
    
}


    private: void initAnimations(){

    Animation* nullAnimation = NullAnimationFactory::getFactoryInstance()->getInstance(0);;
    




                        for (
    int32_t index = this->selectedAnimationArray.size();--index >= 0; )
        {
this->selectedAnimationArray[index]= nullAnimation;
    
}





                        for (
    int32_t index = this->unSelectedAnimationArray.size();--index >= 0; )
        {
this->unSelectedAnimationArray[index]= nullAnimation;
    
}

}


    private: void addAll(std::vector<ABCustomItem*> items){




                        for (
    int32_t index = items.size();--index >= 0; )
        {
this->addAt(index, items[index]);
    
}

}


    private: void addAt(int32_t index, ABCustomItem* item){

    BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();;
    

    BasicColor* buttonColor = basicColorFactory->TRANSPARENT_GREY;;
    

    BasicColor* selectedButtonColor = basicColorFactory->TRANSPARENT_RED;;
    

    int32_t width = item->getMinimumWidth();;
    

    int32_t height = item->getMinimumHeight();;
    

    int32_t adjustedBorder = 3;;
    

    int32_t offset =  -(this->halfBorder +adjustedBorder);;
    

    int32_t rectWidth = width +this->border -adjustedBorder;;
    

    int32_t rectHeight = height +this->border -adjustedBorder;;
    

                        if(J2MEUtil::isJ2ME() || J2MEUtil::isHTML())
                        
                                    {
                                    this->selectedAnimationArray[index]= new RectangleAdjustedAnimation(rectWidth, rectHeight, offset, offset, selectedButtonColor);
    

                                    }
                                
                        else {
                            this->selectedAnimationArray[index]= new RectangleFilledAdjustedAnimation(rectWidth, rectHeight, offset, offset, selectedButtonColor);
    

                        }
                            
adjustedBorder= 4;
    

                        if(J2MEUtil::isJ2ME() || J2MEUtil::isHTML())
                        
                                    {
                                    this->unSelectedAnimationArray[index]= new RectangleAdjustedAnimation(rectWidth, rectHeight, offset, offset, buttonColor);
    

                                    }
                                
                        else {
                            this->unSelectedAnimationArray[index]= new RectangleFilledAdjustedAnimation(rectWidth, rectHeight, offset, offset, buttonColor);
    

                        }
                            
}


    private: void updateAll(Graphics* graphics, std::vector<ABCustomItem*> items){




                        for (
    int32_t index = items.size();--index >= 0; )
        {
items[index].preMeasurement(graphics);
    
this->updateAt(index, items[index]);
    
}

}


    private: void updateAt(int32_t index, ABCustomItem* item){

    BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();;
    

    BasicColor* buttonColor = basicColorFactory->TRANSPARENT_GREY;;
    

    BasicColor* selectedButtonColor = basicColorFactory->TRANSPARENT_RED;;
    

    int32_t width = item->getMinimumWidth();;
    

    int32_t height = item->getMinimumHeight();;
    

    int32_t adjustedBorder = 3;;
    

    int32_t offset =  -(this->halfBorder +adjustedBorder);;
    

    int32_t rectWidth = width +this->border -adjustedBorder;;
    

    int32_t rectHeight = height +this->border -adjustedBorder;;
    

                        if(J2MEUtil::isJ2ME() || J2MEUtil::isHTML())
                        
                                    {
                                    
    RectangleAdjustedAnimation* rectangleAdjustedAnimation = dynamic_cast<RectangleAdjustedAnimation*>(this->selectedAnimationArray[index]);;
    
rectangleAdjustedAnimation->setWidth(rectWidth);
    
rectangleAdjustedAnimation->setHeight(rectHeight);
    
rectangleAdjustedAnimation->setOffsetX(offset);
    
rectangleAdjustedAnimation->setOffsetY(offset);
    
rectangleAdjustedAnimation->setBasicColorP(selectedButtonColor);
    

                                    }
                                
                        else {
                            
    RectangleFilledAdjustedAnimation* rectangleAdjustedAnimation = dynamic_cast<RectangleFilledAdjustedAnimation*>(this->selectedAnimationArray[index]);;
    
rectangleAdjustedAnimation->setWidth(rectWidth);
    
rectangleAdjustedAnimation->setHeight(rectHeight);
    
rectangleAdjustedAnimation->setOffsetX(offset);
    
rectangleAdjustedAnimation->setOffsetY(offset);
    
rectangleAdjustedAnimation->setBasicColorP(selectedButtonColor);
    

                        }
                            
adjustedBorder= 4;
    

                        if(J2MEUtil::isJ2ME() || J2MEUtil::isHTML())
                        
                                    {
                                    
    RectangleAdjustedAnimation* rectangleAdjustedAnimation = dynamic_cast<RectangleAdjustedAnimation*>(this->unSelectedAnimationArray[index]);;
    
rectangleAdjustedAnimation->setWidth(rectWidth);
    
rectangleAdjustedAnimation->setHeight(rectHeight);
    
rectangleAdjustedAnimation->setOffsetX(offset);
    
rectangleAdjustedAnimation->setOffsetY(offset);
    
rectangleAdjustedAnimation->setBasicColorP(buttonColor);
    

                                    }
                                
                        else {
                            
    RectangleFilledAdjustedAnimation* rectangleAdjustedAnimation = dynamic_cast<RectangleFilledAdjustedAnimation*>(this->unSelectedAnimationArray[index]);;
    
rectangleAdjustedAnimation->setWidth(rectWidth);
    
rectangleAdjustedAnimation->setHeight(rectHeight);
    
rectangleAdjustedAnimation->setOffsetX(offset);
    
rectangleAdjustedAnimation->setOffsetY(offset);
    
rectangleAdjustedAnimation->setBasicColorP(buttonColor);
    

                        }
                            
}


    public: Command* getSelectedCommand(){

    int32_t index = super.getSelectedIndex();;
    

    CommandTextItem* commandTextItem = dynamic_cast<CommandTextItem*>(this->get(index) as unknown);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commandTextItem->getCommand();;
    
}


    public: int32_t append(ABCustomItem* item){

    int32_t result = super.append(item);;
    
this->addAt(result, item);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public: void delete_(int32_t itemNum){
super.delete(itemNum);
    
}


    public: void deleteAll(){
this->initAnimations();
    
super.deleteAll();
    
}


    public: void insert(int32_t itemNum, ABCustomItem* item){
super.insert(itemNum, item);
    
}


    public: void set(int32_t itemNum, ABCustomItem* item){
super.set(itemNum, item);
    
}


    public: void paint(Graphics* graphics){
this->myFontProcessor.process(graphics);
    
super.paint(graphics);
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t paintItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y){
this->selectedAnimationArray[index].paintXY(graphics, x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.paintItem(graphics, index, item, x, y);;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t paintUnselectedItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y){
this->unSelectedAnimationArray[index].paintXY(graphics, x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.paintUnselectedItem(graphics, index, item, x, y);;
    
}


};

            

