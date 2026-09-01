
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
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/file/upload/media/UploadMediaSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/media/MediaData.h>

      
#include <org/allbinary/logic/visual/media/MediaTypeData.h>

      
#include <org/allbinary/logic/visual/media/MediaUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventoryUploadMediaUtil
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const MediaUtil mediaUtil = MediaUtil::getInstance();

    private: const int32_t LARGEWIDTH = 1024;

    private: const int32_t LARGEHEIGHT = 1024;

    private: const int32_t MEDIUMWIDTH = 256;

    private: const int32_t MEDIUMHEIGHT = 256;

    private: const int32_t SMALLWIDTH = 128;

    private: const int32_t SMALLHEIGHT = 128;

    private: const std::string SMALL = "Small";

    private: const std::string MEDIUM = "Medium";

    private: const std::string LARGE = "Large";

    private: StoreFrontInterface storeFrontInterface;

    private: ItemInterface itemInterface;

public: InventoryUploadMediaUtil(StoreFrontInterface storeFrontInterface, ItemInterface itemInterface){
this->storeFrontInterface= storeFrontInterface;
    
this->itemInterface= itemInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: ItemInterface saveFiles(std::vector<int8_t> byteArray, std::string fileName, MediaData mediaData){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF("Start FileName: " +fileName, this, "saveFiles()");
    

                                    }
                                

                        if(StringValidationUtil::getInstance().isEmpty(fileName))
                        
                                    {
                                    


                            throw Exception("Image File Name Was Null");
                    

                                    }
                                

    FileUtil fileUtil = FileUtil::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(URLGLOBALS::getWebappPath());
    
stringBuffer.append(this->storeFrontInterface.getCurrentHostNamePath());
    
stringBuffer.append(this->itemInterface.getCategory());
    

    std::string fullPath = stringBuffer.toString();;
    

    AbFile imageDirectoryFile = AbFile::createAbFile(fullPath);;
    

                        if(!imageDirectoryFile.isDirectory())
                        
                                    {
                                    


                            throw Exception("Unable to save file to non existant directory");
                    

                                    }
                                
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(fullPath);
    
stringBuffer.append(fileName);
    
stringBuffer.append(AbPathData::getInstance().EXTENSION_SEP);
    
stringBuffer.append(mediaData.getName());
    

    AbFile originalImageFile = AbFile::createAbFile(stringBuffer.toString());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF("Saving Original Image: " +originalImageFile, this, "saveFiles()");
    

                                    }
                                
originalImageFile.createNewFile();
    
fileUtil.write(ByteArrayInputStream(byteArray), originalImageFile);
    

    UploadMediaSingleton uploadMedia = UploadMediaSingleton::getInstance();;
    

    bool isMediaSupported = uploadMedia.isWriterSupported(mediaData.getName()) || uploadMedia.isReaderSupported(mediaData.getName());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append("Is Image Type: ");
    
stringBuffer.append(mediaData.getName());
    
stringBuffer.append(" supported: ");
    
stringBuffer.appendboolean(isMediaSupported);
    
this->logUtil.putF(stringBuffer.toString(), this, "saveFiles()");
    

                                    }
                                

    MediaData defaultMediaData = MediaData::getDefault();;
    
this->setFileNames(fileName);
    

                        if(isMediaSupported)
                        
                                    {
                                    
    bool isMediaResizable = uploadMedia.isWriterMedia(mediaData.getName(), MediaTypeData::getInstance().RESIZABLE_MEDIA);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append("Is ");
    
stringBuffer.append(mediaData.toString());
    
stringBuffer.append(" Image Resize Supported:");
    
stringBuffer.appendboolean(uploadMedia.isSupported(mediaData.getName()));
    
stringBuffer.append(" WriterMedia: ");
    
stringBuffer.appendboolean(isMediaResizable);
    
this->logUtil.putF(stringBuffer.toString(), this, "saveFiles()");
    

                                    }
                                

                        if(isMediaResizable)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF("Saving Small Image: " +this->itemInterface.getSmallImage(), this, "saveFiles()");
    

                                    }
                                
this->mediaUtil.saveImageFile(originalImageFile, this->itemInterface.getSmallImage(), fullPath, mediaData, this->SMALLWIDTH, this->SMALLHEIGHT);
    
this->mediaUtil.saveImageFile(originalImageFile, this->itemInterface.getMediumImage(), fullPath, mediaData, this->MEDIUMWIDTH, this->MEDIUMHEIGHT);
    
this->mediaUtil.saveImageFile(originalImageFile, this->itemInterface.getLargeImage(), fullPath, mediaData, this->LARGEWIDTH, this->LARGEHEIGHT);
    

                                    }
                                
                        else {
                            
    bool isConvertable = mediaData.isConvertableTo(defaultMediaData);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append("Converting: ");
    
stringBuffer.append(defaultMediaData.getName());
    
stringBuffer.append(" into ");
    
stringBuffer.append(mediaData.getName());
    
stringBuffer.append(" if Convertable is it: ");
    
stringBuffer.appendboolean(isConvertable);
    
this->logUtil.putF(stringBuffer.toString(), this, "saveFiles()");
    

                                    }
                                

                        if(isConvertable)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF("Saving Small Image: " +this->itemInterface.getSmallImage(), this, "saveFiles()");
    

                                    }
                                
this->mediaUtil.saveImageFile(originalImageFile, this->itemInterface.getSmallImage(), fullPath, defaultMediaData, this->SMALLWIDTH, this->SMALLHEIGHT);
    
this->mediaUtil.saveImageFile(originalImageFile, this->itemInterface.getMediumImage(), fullPath, defaultMediaData, this->MEDIUMWIDTH, this->MEDIUMHEIGHT);
    
this->mediaUtil.saveImageFile(originalImageFile, this->itemInterface.getLargeImage(), fullPath, defaultMediaData, this->LARGEWIDTH, this->LARGEHEIGHT);
    

                                    }
                                
                        else {
                            
    AbFile smallImageFile = AbFile::createAbFile(this->itemInterface.getSmallImage());;
    
smallImageFile.createNewFile();
    
fileUtil.write(ByteArrayInputStream(byteArray), smallImageFile);
    

    AbFile mediumImageFile = AbFile::createAbFile(this->itemInterface.getMediumImage());;
    
smallImageFile.createNewFile();
    
fileUtil.write(ByteArrayInputStream(byteArray), mediumImageFile);
    

    AbFile largeImageFile = AbFile::createAbFile(this->itemInterface.getSmallImage());;
    
largeImageFile.createNewFile();
    
fileUtil.write(ByteArrayInputStream(byteArray), largeImageFile);
    

                        }
                            

                        }
                            

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.END, this, "saveFiles()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->itemInterface;
    
}


    private: void setFileNames(std::string fileName){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->itemInterface.getId());
    
stringBuffer.append(AbPathData::getInstance().EXTENSION_SEP);
    
stringBuffer.append(MediaData::getDefault().getName());
    

    std::string END = stringBuffer.toString();;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(fileName);
    
stringBuffer.append(this->SMALL);
    
stringBuffer.append(END);
    

    std::string newImageFileName = stringBuffer.toString();;
    
this->itemInterface.setSmallImage(newImageFileName);
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(fileName);
    
stringBuffer.append(this->MEDIUM);
    
stringBuffer.append(END);
    
newImageFileName= stringBuffer.toString();
    
this->itemInterface.setMediumImage(newImageFileName);
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(fileName);
    
stringBuffer.append(this->LARGE);
    
stringBuffer.append(END);
    
newImageFileName= stringBuffer.toString();
    
this->itemInterface.setLargeImage(newImageFileName);
    
}


};

            

