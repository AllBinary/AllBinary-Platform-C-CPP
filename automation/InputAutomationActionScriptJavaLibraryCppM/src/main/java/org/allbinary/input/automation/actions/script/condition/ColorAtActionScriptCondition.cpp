
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITION_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/Color.h>

      
#include <java/awt/Point.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/graphics/color/ColorCacheFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheable.h>

      
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/media/image/analysis/ColorRange.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionJPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionData.h"


ColorAtActionScriptCondition::ColorAtActionScriptCondition(Node* node) : BasicProfileActionScriptCondition(ColorAtActionScriptCondition::NAME, node), logUtil(LogUtil::getInstance()), colorRangeInterface(dynamic_cast<ColorRangeInterface*>(new ColorRange())){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->point= new Point(0, 0);
    

    Node* actionNode = DomSearchHelper::getNode(ColorAtActionScriptConditionData::NAME, node->getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList* nodeList = actionNode->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* childNode = nodeList->item(index);;
    

                        if(childNode->getNodeName()->compareTo(ColorAtActionScriptConditionData::LOCATION_X) == 0)
                        
                                    {
                                    
    std::string locationX = DomNodeHelper::getTextNodeValue(childNode);;
    
this->point->x= Integer.valueOf(locationX);
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(ColorAtActionScriptConditionData::LOCATION_Y) == 0)
                        
                                    {
                                    
    std::string locationY = DomNodeHelper::getTextNodeValue(childNode);;
    
this->point->y= Integer.valueOf(locationY);
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(ColorAtActionScriptConditionData::MIN_RED) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface()->setMinRed(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(ColorAtActionScriptConditionData::MAX_RED) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface()->setMaxRed(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(ColorAtActionScriptConditionData::MIN_GREEN) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface()->setMinGreen(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(ColorAtActionScriptConditionData::MAX_GREEN) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface()->setMaxGreen(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(ColorAtActionScriptConditionData::MIN_BLUE) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface()->setMinBlue(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(ColorAtActionScriptConditionData::MAX_BLUE) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface()->setMaxBlue(string.valueOf());
    

                                    }
                                
}


                                    }
                                
                        else {
                            


                            throw Exception("Color At Action Script Condition Node Null");
                    

                        }
                            
this->init();
    
}


ColorAtActionScriptCondition::ColorAtActionScriptCondition() : BasicProfileActionScriptCondition(ColorAtActionScriptCondition::NAME), logUtil(LogUtil::getInstance()), colorRangeInterface(dynamic_cast<ColorRangeInterface*>(new ColorRange())){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->point= new Point(0, 0);
    
this->init();
    
}


    auto ColorAtActionScriptCondition::init() -> void{
this->colorAtActionScriptConditionJPanel= new ColorAtActionScriptConditionJPanel(this);
    
}


    auto ColorAtActionScriptCondition::getPoint() -> Point*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->point;
    
}


    auto ColorAtActionScriptCondition::setPoint(Point* point) -> void{
this->point= point;
    
}


    auto ColorAtActionScriptCondition::showDialog() -> void{
this->colorAtActionScriptConditionJPanel->getColorAtActionJDialog()->setVisible(true);
    
}


    auto ColorAtActionScriptCondition::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(ColorAtActionScriptConditionData::LOCATION_X, std::to_string(this->getPoint()->x));
    
hashMap->put(ColorAtActionScriptConditionData::LOCATION_Y, std::to_string(this->getPoint()->y));
    
hashMap->put(ColorAtActionScriptConditionData::MIN_RED, std::to_string(this->getColorRangeInterface()->getMinRed()));
    
hashMap->put(ColorAtActionScriptConditionData::MAX_RED, std::to_string(this->getColorRangeInterface()->getMaxRed()));
    
hashMap->put(ColorAtActionScriptConditionData::MIN_GREEN, std::to_string(this->getColorRangeInterface()->getMinGreen()));
    
hashMap->put(ColorAtActionScriptConditionData::MAX_GREEN, std::to_string(this->getColorRangeInterface()->getMaxGreen()));
    
hashMap->put(ColorAtActionScriptConditionData::MIN_BLUE, std::to_string(this->getColorRangeInterface()->getMinBlue()));
    
hashMap->put(ColorAtActionScriptConditionData::MAX_BLUE, std::to_string(this->getColorRangeInterface()->getMaxBlue()));
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(JavaString::valueOf(hashMap)), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto ColorAtActionScriptCondition::toXmlNode(Document* document) -> Node*{

    Node* node = BasicProfileActionScriptCondition::toXmlNode(document);;
    
node->appendChild(ModDomHelper::createNodeWithValueNodes(document, ColorAtActionScriptConditionData::NAME, this->toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto ColorAtActionScriptCondition::shouldProcess(int64_t frame) -> bool{

    BufferedImageFrameCacheable* capturedBufferedImageCacheable = dynamic_cast<BufferedImageFrameCacheable*>((dynamic_cast<AutomaticCacheInterface*>(CapturedBufferedImagesCacheSingleton::getInstance()))->get((frame).toLong()));;
    

    BufferedImage* bufferedImage = capturedBufferedImageCacheable->getBufferedImage();;
    

    AutomaticCacheInterface* automaticCacheInterface = ColorCacheFactory::getInstance();;
    

    int32_t colorInteger = Integer.valueOf(bufferedImage->getRGB(this->getPoint()->x, this->getPoint()->y));;
    

    ColorCacheable* colorCacheable = dynamic_cast<ColorCacheable*>(automaticCacheInterface->get(colorInteger));;
    

    Color* color = colorCacheable->getColor();;
    

                        if(this->colorRangeInterface->isInRange(color))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicProfileActionScriptCondition::shouldProcess(frame);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto ColorAtActionScriptCondition::log() -> void{

    std::string message = JavaString::valueOf((new StringMaker())->append("getPoint(): ")->append(JavaString::valueOf(this->getPoint()))->append(CommonSeps::getInstance()->NEW_LINE)->append(JavaString::valueOf(this->getColorRangeInterface())));;
    
this->logUtil->putF(message, this, "log");
    
}


    auto ColorAtActionScriptCondition::getColorRangeInterface() -> ColorRangeInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->colorRangeInterface;
    
}


    auto ColorAtActionScriptCondition::setColorRangeInterface(ColorRangeInterface* colorRangeInterface) -> void{
this->colorRangeInterface= colorRangeInterface;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITION_CPP
