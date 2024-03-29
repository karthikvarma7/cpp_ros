// Auto-generated. Do not edit!

// (in-package boustrophedon_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class PlanMowingPathGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.property = null;
      this.robot_position = null;
    }
    else {
      if (initObj.hasOwnProperty('property')) {
        this.property = initObj.property
      }
      else {
        this.property = new geometry_msgs.msg.PolygonStamped();
      }
      if (initObj.hasOwnProperty('robot_position')) {
        this.robot_position = initObj.robot_position
      }
      else {
        this.robot_position = new geometry_msgs.msg.PoseStamped();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PlanMowingPathGoal
    // Serialize message field [property]
    bufferOffset = geometry_msgs.msg.PolygonStamped.serialize(obj.property, buffer, bufferOffset);
    // Serialize message field [robot_position]
    bufferOffset = geometry_msgs.msg.PoseStamped.serialize(obj.robot_position, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PlanMowingPathGoal
    let len;
    let data = new PlanMowingPathGoal(null);
    // Deserialize message field [property]
    data.property = geometry_msgs.msg.PolygonStamped.deserialize(buffer, bufferOffset);
    // Deserialize message field [robot_position]
    data.robot_position = geometry_msgs.msg.PoseStamped.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += geometry_msgs.msg.PolygonStamped.getMessageSize(object.property);
    length += geometry_msgs.msg.PoseStamped.getMessageSize(object.robot_position);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'boustrophedon_msgs/PlanMowingPathGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '60b9ea9efd7a7b3f7b33904f663aa7de';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    geometry_msgs/PolygonStamped property
    geometry_msgs/PoseStamped robot_position
    
    ================================================================================
    MSG: geometry_msgs/PolygonStamped
    # This represents a Polygon with reference coordinate frame and timestamp
    Header header
    Polygon polygon
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Polygon
    #A specification of a polygon where the first and last points are assumed to be connected
    Point32[] points
    
    ================================================================================
    MSG: geometry_msgs/Point32
    # This contains the position of a point in free space(with 32 bits of precision).
    # It is recommeded to use Point wherever possible instead of Point32.  
    # 
    # This recommendation is to promote interoperability.  
    #
    # This message is designed to take up less space when sending
    # lots of points at once, as in the case of a PointCloud.  
    
    float32 x
    float32 y
    float32 z
    ================================================================================
    MSG: geometry_msgs/PoseStamped
    # A Pose with reference coordinate frame and timestamp
    Header header
    Pose pose
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PlanMowingPathGoal(null);
    if (msg.property !== undefined) {
      resolved.property = geometry_msgs.msg.PolygonStamped.Resolve(msg.property)
    }
    else {
      resolved.property = new geometry_msgs.msg.PolygonStamped()
    }

    if (msg.robot_position !== undefined) {
      resolved.robot_position = geometry_msgs.msg.PoseStamped.Resolve(msg.robot_position)
    }
    else {
      resolved.robot_position = new geometry_msgs.msg.PoseStamped()
    }

    return resolved;
    }
};

module.exports = PlanMowingPathGoal;
