
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
        



            #include "../../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptOutput.h"
#include "ImageActionScriptOutputInterface.h"
#include "ImageTypes.h"
#include "ImageActionScriptOutputJPanel.h"
#include "ImageActionScriptOutputData.h"
#include "ImageActionScriptOutputProcessor.h"

class ImageActionScriptOutput: public BasicProfileActionScriptOutput, public ImageActionScriptOutputInterface {

    private: static const std::string NAME = "Captures";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool saved = false;

    private: bool display = false;

    private: ImageTypes imageTypes;

    private: ImageActionScriptOutputJPanel actionScriptOutputJPanel;

public: ImageActionScriptOutput(Node node){
            super(NAME, node);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

    Node actionNode = DomSearchHelper::getNode(ImageActionScriptOutputData::NAME, node.getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList nodeList = actionNode.getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node childNode = nodeList.item(index);;
    

                        if(childNode.getNodeName().compareTo(ImageActionScriptOutputData::SAVE) == 0)
                        
                                    {
                                    
    std::string booleanString = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setSaved(.valueOf());
    

                                    }
                                
                             else 
                        if(childNode.getNodeName().compareTo(ImageActionScriptOutputData::DISPLAY) == 0)
                        
                                    {
                                    
    std::string booleanString = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setSaved(.valueOf());
    

                                    }
                                
                             else 
                        if(childNode.getNodeName().compareTo(ImageActionScriptOutputData::TYPES) == 0)
                        
                                    {
                                    this->setImageTypes(ImageTypes(childNode));
    

                                    }
                                
                        else {
                            


                            throw Exception("Action Script Output Unknown Node");
                    

                        }
                            
}


                                    }
                                
                        else {
                            


                            throw Exception("Action Script Output Node Null");
                    

                        }
                            
this->setAllowsChildren(false);
    
this->actionScriptOutputJPanel= ImageActionScriptOutputJPanel(this);
    
}


public: ImageActionScriptOutput(){
            super(NAME);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setImageTypes(ImageTypes());
    
this->setAllowsChildren(false);
    
this->actionScriptOutputJPanel= ImageActionScriptOutputJPanel(this);
    
}


    public: ImageActionScriptOutputJPanel getActionScriptOutputJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->actionScriptOutputJPanel;
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(ImageActionScriptOutputData::DISPLAY, Boolean::toString(this->isDisplay()));
    
hashMap.put(ImageActionScriptOutputData::SAVE, Boolean::toString(this->isSaved()));
    
this->logUtil.putF("HashMap: " +hashMap.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = super.toXmlNode(document);;
    

    Node newNode = ModDomHelper::createNodeWithValueNodes(document, ImageActionScriptOutputData::NAME, this->toHashMap());;
    
newNode.appendChild(this->getImageTypes().toXmlNode(document));
    
node.appendChild(newNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(Long frame){
ImageActionScriptOutputProcessor::process(this, frame);
    
}


    public: void showDialog(){
this->actionScriptOutputJPanel.getCapturedImageActionJDialog().setVisible(true);
    
}


    public: bool isSaved(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->saved;
    
}


    public: void setSaved(bool saved){
this->saved= saved;
    
}


    public: bool isDisplay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->display;
    
}


    public: void setDisplay(bool display){
this->display= display;
    
}


    public: std::string future_toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(" Is Save: ");
    
stringBuffer.appendboolean(this->isSaved());
    
stringBuffer.append(" Is Display: ");
    
stringBuffer.appendboolean(this->isDisplay());
    
stringBuffer.append(" ");
    
stringBuffer.append(this->getImageTypes().toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: void log(){
this->logUtil.putF(this->future_toString(), this, "log");
    
}


    public: ImageTypes getImageTypes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageTypes;
    
}


    public: void setImageTypes(ImageTypes imageTypes){
this->imageTypes= imageTypes;
    
}


};

            

