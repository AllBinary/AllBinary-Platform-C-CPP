
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
        #include "BasicProfileActionScriptCondition.h"
#include "ColorAtActionScriptConditionInterface.h"
#include "ColorAtActionScriptConditionJPanel.h"
#include "ColorAtActionScriptConditionData.h"

class ColorAtActionScriptCondition: public BasicProfileActionScriptCondition, public ColorAtActionScriptConditionInterface {

    private: static const std::string NAME = "If Color At";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: ColorAtActionScriptConditionJPanel colorAtActionScriptConditionJPanel;

    private: Point point;

    private: ColorRangeInterface colorRangeInterface = ColorRange();

public: ColorAtActionScriptCondition(Node node) : BasicProfileActionScriptCondition(ColorAtActionScriptCondition::NAME, node){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->point= Point(0, 0);
    

    Node actionNode = DomSearchHelper::getNode(ColorAtActionScriptConditionData::NAME, node.getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList nodeList = actionNode.getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node childNode = nodeList.item(index);;
    

                        if(childNode.getNodeName().compareTo(ColorAtActionScriptConditionData::LOCATION_X) == 0)
                        
                                    {
                                    
    std::string locationX = DomNodeHelper::getTextNodeValue(childNode);;
    
this->point.x= Integer::valueOf(locationX);
    

                                    }
                                
                             else 
                        if(childNode.getNodeName().compareTo(ColorAtActionScriptConditionData::LOCATION_Y) == 0)
                        
                                    {
                                    
    std::string locationY = DomNodeHelper::getTextNodeValue(childNode);;
    
this->point.y= Integer::valueOf(locationY);
    

                                    }
                                
                             else 
                        if(childNode.getNodeName().compareTo(ColorAtActionScriptConditionData::MIN_RED) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface().setMinRed(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode.getNodeName().compareTo(ColorAtActionScriptConditionData::MAX_RED) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface().setMaxRed(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode.getNodeName().compareTo(ColorAtActionScriptConditionData::MIN_GREEN) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface().setMinGreen(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode.getNodeName().compareTo(ColorAtActionScriptConditionData::MAX_GREEN) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface().setMaxGreen(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode.getNodeName().compareTo(ColorAtActionScriptConditionData::MIN_BLUE) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface().setMinBlue(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode.getNodeName().compareTo(ColorAtActionScriptConditionData::MAX_BLUE) == 0)
                        
                                    {
                                    
    std::string string = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getColorRangeInterface().setMaxBlue(string.valueOf());
    

                                    }
                                
}


                                    }
                                
                        else {
                            


                            throw Exception("Color At Action Script Condition Node Null");
                    

                        }
                            
this->init();
    
}


public: ColorAtActionScriptCondition() : BasicProfileActionScriptCondition(ColorAtActionScriptCondition::NAME){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->point= Point(0, 0);
    
this->init();
    
}


    private: void init(){
this->colorAtActionScriptConditionJPanel= ColorAtActionScriptConditionJPanel(this);
    
}


    public: Point getPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    public: void setPoint(Point point){
this->point= point;
    
}


    public: void showDialog(){
this->colorAtActionScriptConditionJPanel.getColorAtActionJDialog().setVisible(true);
    
}


    public: HashMap<Object*, Object*> toHashMap(){

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(ColorAtActionScriptConditionData::LOCATION_X, std::to_string(x));
    
hashMap.put(ColorAtActionScriptConditionData::LOCATION_Y, std::to_string(y));
    
hashMap.put(ColorAtActionScriptConditionData::MIN_RED, std::to_string(getMinRed));
    
hashMap.put(ColorAtActionScriptConditionData::MAX_RED, std::to_string(getMaxRed));
    
hashMap.put(ColorAtActionScriptConditionData::MIN_GREEN, std::to_string(getMinGreen));
    
hashMap.put(ColorAtActionScriptConditionData::MAX_GREEN, std::to_string(getMaxGreen));
    
hashMap.put(ColorAtActionScriptConditionData::MIN_BLUE, std::to_string(getMinBlue));
    
hashMap.put(ColorAtActionScriptConditionData::MAX_BLUE, std::to_string(getMaxBlue));
    
this->logUtil.putF("HashMap: " +hashMap.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = super.toXmlNode(document);;
    
node.appendChild(ModDomHelper::createNodeWithValueNodes(document, ColorAtActionScriptConditionData::NAME, this->toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(int64_t frame){

    BufferedImageFrameCacheable capturedBufferedImageCacheable = (getInstance).get((frame).toLong());;
    

    BufferedImage bufferedImage = capturedBufferedImageCacheable.getBufferedImage();;
    

    AutomaticCacheInterface automaticCacheInterface = ColorCacheFactory::getInstance();;
    

    Integer colorInteger = Integer::valueOf(bufferedImage.getRGB(this->getPoint().x, this->getPoint().y));;
    

    ColorCacheable colorCacheable = automaticCacheInterface.get(colorInteger);;
    

    Color color = colorCacheable.getColor();;
    

                        if(this->colorRangeInterface.isInRange(color))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.shouldProcess(frame);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void log(){

    std::string message = StringMaker().append("getPoint(): ").append(this->getPoint().toString()).append(CommonSeps::getInstance().NEW_LINE).append(this->getColorRangeInterface().toString()).toString();;
    
this->logUtil.putF(message, this, "log");
    
}


    public: ColorRangeInterface getColorRangeInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorRangeInterface;
    
}


    public: void setColorRangeInterface(ColorRangeInterface colorRangeInterface){
this->colorRangeInterface= colorRangeInterface;
    
}


};

            

