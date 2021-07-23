
"use strict";

let CommandBool = require('./CommandBool.js')
let CommandLong = require('./CommandLong.js')
let SetMode = require('./SetMode.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let SetMavFrame = require('./SetMavFrame.js')
let FileRename = require('./FileRename.js')
let CommandTOL = require('./CommandTOL.js')
let LogRequestList = require('./LogRequestList.js')
let ParamGet = require('./ParamGet.js')
let FileOpen = require('./FileOpen.js')
let FileTruncate = require('./FileTruncate.js')
let FileClose = require('./FileClose.js')
let FileChecksum = require('./FileChecksum.js')
let ParamPush = require('./ParamPush.js')
let WaypointPull = require('./WaypointPull.js')
let FileRemove = require('./FileRemove.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let ParamSet = require('./ParamSet.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let WaypointClear = require('./WaypointClear.js')
let ParamPull = require('./ParamPull.js')
let FileWrite = require('./FileWrite.js')
let FileRead = require('./FileRead.js')
let WaypointPush = require('./WaypointPush.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let CommandInt = require('./CommandInt.js')
let MessageInterval = require('./MessageInterval.js')
let FileList = require('./FileList.js')
let LogRequestData = require('./LogRequestData.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let StreamRate = require('./StreamRate.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let FileMakeDir = require('./FileMakeDir.js')
let CommandHome = require('./CommandHome.js')
let MountConfigure = require('./MountConfigure.js')

module.exports = {
  CommandBool: CommandBool,
  CommandLong: CommandLong,
  SetMode: SetMode,
  CommandVtolTransition: CommandVtolTransition,
  SetMavFrame: SetMavFrame,
  FileRename: FileRename,
  CommandTOL: CommandTOL,
  LogRequestList: LogRequestList,
  ParamGet: ParamGet,
  FileOpen: FileOpen,
  FileTruncate: FileTruncate,
  FileClose: FileClose,
  FileChecksum: FileChecksum,
  ParamPush: ParamPush,
  WaypointPull: WaypointPull,
  FileRemove: FileRemove,
  VehicleInfoGet: VehicleInfoGet,
  ParamSet: ParamSet,
  CommandTriggerControl: CommandTriggerControl,
  WaypointClear: WaypointClear,
  ParamPull: ParamPull,
  FileWrite: FileWrite,
  FileRead: FileRead,
  WaypointPush: WaypointPush,
  WaypointSetCurrent: WaypointSetCurrent,
  CommandInt: CommandInt,
  MessageInterval: MessageInterval,
  FileList: FileList,
  LogRequestData: LogRequestData,
  CommandTriggerInterval: CommandTriggerInterval,
  StreamRate: StreamRate,
  FileRemoveDir: FileRemoveDir,
  LogRequestEnd: LogRequestEnd,
  FileMakeDir: FileMakeDir,
  CommandHome: CommandHome,
  MountConfigure: MountConfigure,
};
