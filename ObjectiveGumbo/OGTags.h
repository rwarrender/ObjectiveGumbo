//
//  OGTags.m
//  ObjectiveGumbo
//
//  Copyright (c) 2017 Richard Warrender. All rights reserved.
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, OGNamespace) {
    OGNamespaceHTML,
    OGNamespaceSVG,
    OGNamespaceMATHML,
};

/**
 * OGTag represents HTML tags. They are toll-bridge free with gumbo_tag
 */
typedef NS_ENUM(NSUInteger, OGTag) {
    OGTagHTML,
    OGTagHead,
    OGTagTitle,
    OGTagBase,
    OGTagLink,
    OGTagMeta,
    OGTagStyle,
    OGTagScript,
    OGTagNoScript,
    OGTagTemplate,
    OGTagBody,
    OGTagArticle,
    OGTagSection,
    OGTagNav,
    OGTagASide,
    OGTagH1,
    OGTagH2,
    OGTagH3,
    OGTagH4,
    OGTagH5,
    OGTagH6,
    OGTagHGroup,
    OGTagHeader,
    OGTagFooter,
    OGTagAddress,
    OGTagP,
    OGTagHR,
    OGTagPre,
    OGTagBlockquote,
    OGTagOL,
    OGTagUL,
    OGTagLI,
    OGTagDL,
    OGTagDT,
    OGTagDD,
    OGTagFigure,
    OGTagFigCaption,
    OGTagMain,
    OGTagDiv,
    OGTagA,
    OGTagEM,
    OGTagStrong,
    OGTagSmall,
    OGTagS,
    OGTagCite,
    OGTagQ,
    OGTagDFN,
    OGTagAbbr,
    OGTagData,
    OGTagTime,
    OGTagCode,
    OGTagVar,
    OGTagSamp,
    OGTagKBD,
    OGTagSub,
    OGTagSup,
    OGTagI,
    OGTagB,
    OGTagU,
    OGTagMark,
    OGTagRuby,
    OGTagRT,
    OGTagRP,
    OGTagBDI,
    OGTagBDO,
    OGTagSpan,
    OGTagBR,
    OGTagWBR,
    OGTagIns,
    OGTagDel,
    OGTagImage,
    OGTagImg,
    OGTagIFrame,
    OGTagEmbed,
    OGTagObject,
    OGTagParam,
    OGTagVideo,
    OGTagAudio,
    OGTagSource,
    OGTagTrack,
    OGTagCanvas,
    OGTagMap,
    OGTagArea,
    OGTagMath,
    OGTagMI,
    OGTagMO,
    OGTagMN,
    OGTagMS,
    OGTagMText,
    OGTagMGlyph,
    OGTagMAlignMark,
    OGTagAnnotationXML,
    OGTagSVG,
    OGTagForeignObject,
    OGTagDesc,
    OGTagTable,
    OGTagCaption,
    OGTagColGroup,
    OGTagCol,
    OGTagTBody,
    OGTagTHead,
    OGTagTFoot,
    OGTagTR,
    OGTagTD,
    OGTagTH,
    OGTagForm,
    OGTagFieldSet,
    OGTagLegend,
    OGTagLabel,
    OGTagInput,
    OGTagButton,
    OGTagSelect,
    OGTagDataList,
    OGTagOptGroup,
    OGTagOption,
    OGTagTextarea,
    OGTagKeyGen,
    OGTagOutput,
    OGTagProgress,
    OGTagMeter,
    OGTagDetails,
    OGTagSummary,
    OGTagMenu,
    OGTagMenuItem,
    OGTagApplet,
    OGTagAcronym,
    OGTagBGSound,
    OGTagDir,
    OGTagFrame,
    OGTagFrameSet,
    OGTagNoFrames,
    OGTagIsIndex,
    OGTagListing,
    OGTagXMP,
    OGTagNextID,
    OGTagNoEmbed,
    OGTagPlainText,
    OGTagRB,
    OGTagStrike,
    OGTagBaseFont,
    OGTagBig,
    OGTagBlink,
    OGTagCenter,
    OGTagFont,
    OGTagMarquee,
    OGTagMultiCol,
    OGTagNoBR,
    OGTagSpacer,
    OGTagTT,
    OGTagRTC,
    OGTagUnknown // Error-check, always ensure this is last in the enum
};

NSString* NSStringFromOGTag(OGTag tag);
OGTag OGTagFromNSString(NSString *string);
