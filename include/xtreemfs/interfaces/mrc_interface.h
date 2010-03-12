#ifndef _1904103179_H_
#define _1904103179_H_


#include "constants.h"
#include "mrc_osd_types.h"
#include "yield/concurrency.h"
#include "yidl.h"


namespace org
{
  namespace xtreemfs
  {
    namespace interfaces
    {

      class Stat : public ::yidl::runtime::Struct
      {
      public:
        Stat()
          : dev( 0 ),
            ino( 0 ),
            mode( 0 ),
            nlink( 0 ),
            size( 0 ),
            atime_ns( 0 ),
            mtime_ns( 0 ),
            ctime_ns( 0 ),
            blksize( 0 ),
            etag( 0 ),
            truncate_epoch( 0 ),
            attributes( 0 )
        { }

        Stat
        (
          uint64_t dev,
          uint64_t ino,
          uint32_t mode,
          uint32_t nlink,
          const string& user_id,
          const string& group_id,
          uint64_t size,
          uint64_t atime_ns,
          uint64_t mtime_ns,
          uint64_t ctime_ns,
          uint32_t blksize,
          uint64_t etag,
          uint32_t truncate_epoch,
          uint32_t attributes
        )
          : dev( dev ),
            ino( ino ),
            mode( mode ),
            nlink( nlink ),
            user_id( user_id ),
            group_id( group_id ),
            size( size ),
            atime_ns( atime_ns ),
            mtime_ns( mtime_ns ),
            ctime_ns( ctime_ns ),
            blksize( blksize ),
            etag( etag ),
            truncate_epoch( truncate_epoch ),
            attributes( attributes )
        { }

        virtual ~Stat() {  }

        uint64_t get_dev() const { return dev; }
        uint64_t get_ino() const { return ino; }
        uint32_t get_mode() const { return mode; }
        uint32_t get_nlink() const { return nlink; }
        const string& get_user_id() const { return user_id; }
        const string& get_group_id() const { return group_id; }
        uint64_t get_size() const { return size; }
        uint64_t get_atime_ns() const { return atime_ns; }
        uint64_t get_mtime_ns() const { return mtime_ns; }
        uint64_t get_ctime_ns() const { return ctime_ns; }
        uint32_t get_blksize() const { return blksize; }
        uint64_t get_etag() const { return etag; }
        uint32_t get_truncate_epoch() const { return truncate_epoch; }
        uint32_t get_attributes() const { return attributes; }
        void set_dev( uint64_t dev ) { this->dev = dev; }
        void set_ino( uint64_t ino ) { this->ino = ino; }
        void set_mode( uint32_t mode ) { this->mode = mode; }
        void set_nlink( uint32_t nlink ) { this->nlink = nlink; }
        void set_user_id( const string& user_id ) { this->user_id = user_id; }
        void set_group_id( const string& group_id ) { this->group_id = group_id; }
        void set_size( uint64_t size ) { this->size = size; }
        void set_atime_ns( uint64_t atime_ns ) { this->atime_ns = atime_ns; }
        void set_mtime_ns( uint64_t mtime_ns ) { this->mtime_ns = mtime_ns; }
        void set_ctime_ns( uint64_t ctime_ns ) { this->ctime_ns = ctime_ns; }
        void set_blksize( uint32_t blksize ) { this->blksize = blksize; }
        void set_etag( uint64_t etag ) { this->etag = etag; }
        void set_truncate_epoch( uint32_t truncate_epoch ) { this->truncate_epoch = truncate_epoch; }
        void set_attributes( uint32_t attributes ) { this->attributes = attributes; }

        bool operator==( const Stat& other ) const
        {
          return dev == other.dev
                 &&
                 ino == other.ino
                 &&
                 mode == other.mode
                 &&
                 nlink == other.nlink
                 &&
                 user_id == other.user_id
                 &&
                 group_id == other.group_id
                 &&
                 size == other.size
                 &&
                 atime_ns == other.atime_ns
                 &&
                 mtime_ns == other.mtime_ns
                 &&
                 ctime_ns == other.ctime_ns
                 &&
                 blksize == other.blksize
                 &&
                 etag == other.etag
                 &&
                 truncate_epoch == other.truncate_epoch
                 &&
                 attributes == other.attributes;
        }

        // yidl::runtime::RTTIObject
        YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( Stat, 2010030956 );

        // yidl::runtime::MarshallableObject
        void marshal( ::yidl::runtime::Marshaller& marshaller ) const
        {
          marshaller.write( "dev", 0, dev );
          marshaller.write( "ino", 0, ino );
          marshaller.write( "mode", 0, mode );
          marshaller.write( "nlink", 0, nlink );
          marshaller.write( "user_id", 0, user_id );
          marshaller.write( "group_id", 0, group_id );
          marshaller.write( "size", 0, size );
          marshaller.write( "atime_ns", 0, atime_ns );
          marshaller.write( "mtime_ns", 0, mtime_ns );
          marshaller.write( "ctime_ns", 0, ctime_ns );
          marshaller.write( "blksize", 0, blksize );
          marshaller.write( "etag", 0, etag );
          marshaller.write( "truncate_epoch", 0, truncate_epoch );
          marshaller.write( "attributes", 0, attributes );
        }

        void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
        {
          dev = unmarshaller.read_uint64( "dev", 0 );
          ino = unmarshaller.read_uint64( "ino", 0 );
          mode = unmarshaller.read_uint32( "mode", 0 );
          nlink = unmarshaller.read_uint32( "nlink", 0 );
          unmarshaller.read( "user_id", 0, user_id );
          unmarshaller.read( "group_id", 0, group_id );
          size = unmarshaller.read_uint64( "size", 0 );
          atime_ns = unmarshaller.read_uint64( "atime_ns", 0 );
          mtime_ns = unmarshaller.read_uint64( "mtime_ns", 0 );
          ctime_ns = unmarshaller.read_uint64( "ctime_ns", 0 );
          blksize = unmarshaller.read_uint32( "blksize", 0 );
          etag = unmarshaller.read_uint64( "etag", 0 );
          truncate_epoch = unmarshaller.read_uint32( "truncate_epoch", 0 );
          attributes = unmarshaller.read_uint32( "attributes", 0 );
        }

      protected:
        uint64_t dev;
        uint64_t ino;
        uint32_t mode;
        uint32_t nlink;
        string user_id;
        string group_id;
        uint64_t size;
        uint64_t atime_ns;
        uint64_t mtime_ns;
        uint64_t ctime_ns;
        uint32_t blksize;
        uint64_t etag;
        uint32_t truncate_epoch;
        uint32_t attributes;
      };

      class StatSet
        : public ::yidl::runtime::Sequence,
          public vector<org::xtreemfs::interfaces::Stat>
      {
      public:
        StatSet() { }
        StatSet( const org::xtreemfs::interfaces::Stat& first_value ) { vector<org::xtreemfs::interfaces::Stat>::push_back( first_value ); }
        StatSet( size_type size ) : vector<org::xtreemfs::interfaces::Stat>( size ) { }
        virtual ~StatSet() { }

        // yidl::runtime::RTTIObject
        YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( StatSet, 2010030957 );

        // yidl::runtime::MarshallableObject
        void marshal( ::yidl::runtime::Marshaller& marshaller ) const
        {
          size_type value_i_max = size();
          for ( size_type value_i = 0; value_i < value_i_max; value_i++ )
          {
            marshaller.write( "value", 0, ( *this )[value_i] );
          }
        }

        void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
        {
          org::xtreemfs::interfaces::Stat value;
          unmarshaller.read( "value", 0, value );
          push_back( value );
        }

        // yidl::runtime::Sequence
        size_t get_size() const { return size(); }
      };

      class DirectoryEntry : public ::yidl::runtime::Struct
      {
      public:
        DirectoryEntry() { }

        DirectoryEntry
        (
          const string& name,
          const org::xtreemfs::interfaces::StatSet& stbuf
        )
          : name( name ), stbuf( stbuf )
        { }

        virtual ~DirectoryEntry() {  }

        const string& get_name() const { return name; }
        const org::xtreemfs::interfaces::StatSet& get_stbuf() const { return stbuf; }
        void set_name( const string& name ) { this->name = name; }
        void set_stbuf( const org::xtreemfs::interfaces::StatSet&  stbuf ) { this->stbuf = stbuf; }

        bool operator==( const DirectoryEntry& other ) const
        {
          return name == other.name
                 &&
                 stbuf == other.stbuf;
        }

        // yidl::runtime::RTTIObject
        YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( DirectoryEntry, 2010030958 );

        // yidl::runtime::MarshallableObject
        void marshal( ::yidl::runtime::Marshaller& marshaller ) const
        {
          marshaller.write( "name", 0, name );
          marshaller.write( "stbuf", 0, stbuf );
        }

        void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
        {
          unmarshaller.read( "name", 0, name );
          unmarshaller.read( "stbuf", 0, stbuf );
        }

      protected:
        string name;
        org::xtreemfs::interfaces::StatSet stbuf;
      };

      class DirectoryEntrySet
        : public ::yidl::runtime::Sequence,
          public vector<org::xtreemfs::interfaces::DirectoryEntry>
      {
      public:
        DirectoryEntrySet() { }
        DirectoryEntrySet( const org::xtreemfs::interfaces::DirectoryEntry& first_value ) { vector<org::xtreemfs::interfaces::DirectoryEntry>::push_back( first_value ); }
        DirectoryEntrySet( size_type size ) : vector<org::xtreemfs::interfaces::DirectoryEntry>( size ) { }
        virtual ~DirectoryEntrySet() { }

        // yidl::runtime::RTTIObject
        YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( DirectoryEntrySet, 2010030959 );

        // yidl::runtime::MarshallableObject
        void marshal( ::yidl::runtime::Marshaller& marshaller ) const
        {
          size_type value_i_max = size();
          for ( size_type value_i = 0; value_i < value_i_max; value_i++ )
          {
            marshaller.write( "value", 0, ( *this )[value_i] );
          }
        }

        void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
        {
          org::xtreemfs::interfaces::DirectoryEntry value;
          unmarshaller.read( "value", 0, value );
          push_back( value );
        }

        // yidl::runtime::Sequence
        size_t get_size() const { return size(); }
      };

      class StatVFS : public ::yidl::runtime::Struct
      {
      public:
        StatVFS()
          : bsize( 0 ),
            bavail( 0 ),
            blocks( 0 ),
            namemax( 0 ),
            access_control_policy( ACCESS_CONTROL_POLICY_NULL ),
            etag( 0 ),
            mode( 0 )
        { }

        StatVFS
        (
          uint32_t bsize,
          uint64_t bavail,
          uint64_t blocks,
          const string& fsid,
          uint32_t namemax,
          org::xtreemfs::interfaces::AccessControlPolicyType access_control_policy,
          const org::xtreemfs::interfaces::StripingPolicy& default_striping_policy,
          uint64_t etag,
          uint32_t mode,
          const string& name,
          const string& owner_group_id,
          const string& owner_user_id
        )
          : bsize( bsize ),
            bavail( bavail ),
            blocks( blocks ),
            fsid( fsid ),
            namemax( namemax ),
            access_control_policy( access_control_policy ),
            default_striping_policy( default_striping_policy ),
            etag( etag ),
            mode( mode ),
            name( name ),
            owner_group_id( owner_group_id ),
            owner_user_id( owner_user_id )
        { }

        virtual ~StatVFS() {  }

        uint32_t get_bsize() const { return bsize; }
        uint64_t get_bavail() const { return bavail; }
        uint64_t get_blocks() const { return blocks; }
        const string& get_fsid() const { return fsid; }
        uint32_t get_namemax() const { return namemax; }
        org::xtreemfs::interfaces::AccessControlPolicyType get_access_control_policy() const { return access_control_policy; }
        const org::xtreemfs::interfaces::StripingPolicy& get_default_striping_policy() const { return default_striping_policy; }
        uint64_t get_etag() const { return etag; }
        uint32_t get_mode() const { return mode; }
        const string& get_name() const { return name; }
        const string& get_owner_group_id() const { return owner_group_id; }
        const string& get_owner_user_id() const { return owner_user_id; }
        void set_bsize( uint32_t bsize ) { this->bsize = bsize; }
        void set_bavail( uint64_t bavail ) { this->bavail = bavail; }
        void set_blocks( uint64_t blocks ) { this->blocks = blocks; }
        void set_fsid( const string& fsid ) { this->fsid = fsid; }
        void set_namemax( uint32_t namemax ) { this->namemax = namemax; }
        void set_access_control_policy( org::xtreemfs::interfaces::AccessControlPolicyType access_control_policy ) { this->access_control_policy = access_control_policy; }
        void set_default_striping_policy( const org::xtreemfs::interfaces::StripingPolicy&  default_striping_policy ) { this->default_striping_policy = default_striping_policy; }
        void set_etag( uint64_t etag ) { this->etag = etag; }
        void set_mode( uint32_t mode ) { this->mode = mode; }
        void set_name( const string& name ) { this->name = name; }
        void set_owner_group_id( const string& owner_group_id ) { this->owner_group_id = owner_group_id; }
        void set_owner_user_id( const string& owner_user_id ) { this->owner_user_id = owner_user_id; }

        bool operator==( const StatVFS& other ) const
        {
          return bsize == other.bsize
                 &&
                 bavail == other.bavail
                 &&
                 blocks == other.blocks
                 &&
                 fsid == other.fsid
                 &&
                 namemax == other.namemax
                 &&
                 access_control_policy == other.access_control_policy
                 &&
                 default_striping_policy == other.default_striping_policy
                 &&
                 etag == other.etag
                 &&
                 mode == other.mode
                 &&
                 name == other.name
                 &&
                 owner_group_id == other.owner_group_id
                 &&
                 owner_user_id == other.owner_user_id;
        }

        // yidl::runtime::RTTIObject
        YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( StatVFS, 2010030960 );

        // yidl::runtime::MarshallableObject
        void marshal( ::yidl::runtime::Marshaller& marshaller ) const
        {
          marshaller.write( "bsize", 0, bsize );
          marshaller.write( "bavail", 0, bavail );
          marshaller.write( "blocks", 0, blocks );
          marshaller.write( "fsid", 0, fsid );
          marshaller.write( "namemax", 0, namemax );
          marshaller.write( "access_control_policy", 0, static_cast<int32_t>( access_control_policy ) );
          marshaller.write( "default_striping_policy", 0, default_striping_policy );
          marshaller.write( "etag", 0, etag );
          marshaller.write( "mode", 0, mode );
          marshaller.write( "name", 0, name );
          marshaller.write( "owner_group_id", 0, owner_group_id );
          marshaller.write( "owner_user_id", 0, owner_user_id );
        }

        void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
        {
          bsize = unmarshaller.read_uint32( "bsize", 0 );
          bavail = unmarshaller.read_uint64( "bavail", 0 );
          blocks = unmarshaller.read_uint64( "blocks", 0 );
          unmarshaller.read( "fsid", 0, fsid );
          namemax = unmarshaller.read_uint32( "namemax", 0 );
          access_control_policy = static_cast<org::xtreemfs::interfaces::AccessControlPolicyType>( unmarshaller.read_int32( "access_control_policy", 0 ) );
          unmarshaller.read( "default_striping_policy", 0, default_striping_policy );
          etag = unmarshaller.read_uint64( "etag", 0 );
          mode = unmarshaller.read_uint32( "mode", 0 );
          unmarshaller.read( "name", 0, name );
          unmarshaller.read( "owner_group_id", 0, owner_group_id );
          unmarshaller.read( "owner_user_id", 0, owner_user_id );
        }

      protected:
        uint32_t bsize;
        uint64_t bavail;
        uint64_t blocks;
        string fsid;
        uint32_t namemax;
        org::xtreemfs::interfaces::AccessControlPolicyType access_control_policy;
        org::xtreemfs::interfaces::StripingPolicy default_striping_policy;
        uint64_t etag;
        uint32_t mode;
        string name;
        string owner_group_id;
        string owner_user_id;
      };

      class StatVFSSet
        : public ::yidl::runtime::Sequence,
          public vector<org::xtreemfs::interfaces::StatVFS>
      {
      public:
        StatVFSSet() { }
        StatVFSSet( const org::xtreemfs::interfaces::StatVFS& first_value ) { vector<org::xtreemfs::interfaces::StatVFS>::push_back( first_value ); }
        StatVFSSet( size_type size ) : vector<org::xtreemfs::interfaces::StatVFS>( size ) { }
        virtual ~StatVFSSet() { }

        // yidl::runtime::RTTIObject
        YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( StatVFSSet, 2010030961 );

        // yidl::runtime::MarshallableObject
        void marshal( ::yidl::runtime::Marshaller& marshaller ) const
        {
          size_type value_i_max = size();
          for ( size_type value_i = 0; value_i < value_i_max; value_i++ )
          {
            marshaller.write( "value", 0, ( *this )[value_i] );
          }
        }

        void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
        {
          org::xtreemfs::interfaces::StatVFS value;
          unmarshaller.read( "value", 0, value );
          push_back( value );
        }

        // yidl::runtime::Sequence
        size_t get_size() const { return size(); }
      };


      class MRCInterface
      {
      public:
          const static uint32_t HTTP_PORT_DEFAULT = 30636;
        const static uint32_t ONCRPC_PORT_DEFAULT = 32636;
        const static uint32_t ONCRPCG_PORT_DEFAULT = 32636;
        const static uint32_t ONCRPCS_PORT_DEFAULT = 32636;
        const static uint32_t ONCRPCU_PORT_DEFAULT = 32636;
        const static uint32_t SETATTR_MODE = 1;
        const static uint32_t SETATTR_UID = 2;
        const static uint32_t SETATTR_GID = 4;
        const static uint32_t SETATTR_SIZE = 8;
        const static uint32_t SETATTR_ATIME = 16;
        const static uint32_t SETATTR_MTIME = 32;
        const static uint32_t SETATTR_CTIME = 64;
        const static uint32_t SETATTR_ATTRIBUTES = 128;const static uint32_t TAG = 2010031116;

        virtual ~MRCInterface() { }

        uint32_t get_tag() const { return 2010031116; }



        virtual void
        close
        (
          const org::xtreemfs::interfaces::VivaldiCoordinates& client_vivaldi_coordinates,
          const org::xtreemfs::interfaces::XCap& write_xcap
        )
        { }

        virtual void
        fsetattr
        (
          const org::xtreemfs::interfaces::Stat& stbuf,
          uint32_t to_set,
          const org::xtreemfs::interfaces::XCap& xcap
        )
        { }

        virtual void
        ftruncate
        (
          const org::xtreemfs::interfaces::XCap& write_xcap,
          org::xtreemfs::interfaces::XCap& truncate_xcap
        )
        { }

        virtual void
        getattr
        (
          const string& volume_name,
          const string& path,
          uint64_t known_etag,
          org::xtreemfs::interfaces::StatSet& stbuf
        )
        { }

        virtual void
        getxattr
        (
          const string& volume_name,
          const string& path,
          const string& name,
          string& value
        )
        { }

        virtual void
        link
        (
          const string& volume_name,
          const string& target_path,
          const string& link_path
        )
        { }

        virtual void
        listxattr
        (
          const string& volume_name,
          const string& path,
          org::xtreemfs::interfaces::StringSet& names
        )
        { }

        virtual void
        mkdir
        (
          const string& volume_name,
          const string& path,
          uint32_t mode
        )
        { }

        virtual void
        open
        (
          const string& volume_name,
          const string& path,
          uint32_t flags,
          uint32_t mode,
          uint32_t attributes,
          const org::xtreemfs::interfaces::VivaldiCoordinates& client_vivaldi_coordinates,
          org::xtreemfs::interfaces::FileCredentials& file_credentials
        )
        { }

        virtual void
        readdir
        (
          const string& volume_name,
          const string& path,
          uint64_t known_etag,
          uint16_t limit_directory_entries_count,
          bool names_only,
          uint64_t seen_directory_entries_count,
          org::xtreemfs::interfaces::DirectoryEntrySet& directory_entries
        )
        { }

        virtual void
        readlink
        (
          const string& volume_name,
          const string& path,
          string& link_target_path
        )
        { }

        virtual void
        removexattr
        (
          const string& volume_name,
          const string& path,
          const string& name
        )
        { }

        virtual void
        rename
        (
          const string& volume_name,
          const string& source_path,
          const string& target_path,
          org::xtreemfs::interfaces::FileCredentialsSet& file_credentials
        )
        { }

        virtual void rmdir( const string& volume_name, const string& path ) { }

        virtual void
        setattr
        (
          const string& volume_name,
          const string& path,
          const org::xtreemfs::interfaces::Stat& stbuf,
          uint32_t to_set
        )
        { }

        virtual void
        setxattr
        (
          const string& volume_name,
          const string& path,
          const string& name,
          const string& value,
          int32_t flags
        )
        { }

        virtual void
        statvfs
        (
          const string& volume_name,
          uint64_t known_etag,
          org::xtreemfs::interfaces::StatVFSSet& stbuf
        )
        { }

        virtual void
        symlink
        (
          const string& volume_name,
          const string& target_path,
          const string& link_path
        )
        { }

        virtual void
        unlink
        (
          const string& volume_name,
          const string& path,
          org::xtreemfs::interfaces::FileCredentialsSet& file_credentials
        )
        { }

        virtual void xtreemfs_checkpoint() { }

        virtual void
        xtreemfs_check_file_exists
        (
          const string& volume_id,
          const org::xtreemfs::interfaces::StringSet& file_ids,
          const string& osd_uuid,
          string& bitmap
        )
        { }

        virtual void xtreemfs_dump_database( const string& dump_file ) { }

        virtual void
        xtreemfs_get_suitable_osds
        (
          const string& file_id,
          uint32_t num_osds,
          org::xtreemfs::interfaces::StringSet& osd_uuids
        )
        { }

        virtual void xtreemfs_internal_debug( const string& operation, string& result ) { }

        virtual void xtreemfs_lsvol( org::xtreemfs::interfaces::StatVFSSet& volumes ) { }

        virtual void xtreemfs_mkvol( const org::xtreemfs::interfaces::StatVFS& volume ) { }

        virtual void
        xtreemfs_renew_capability
        (
          const org::xtreemfs::interfaces::XCap& old_xcap,
          org::xtreemfs::interfaces::XCap& renewed_xcap
        )
        { }

        virtual void xtreemfs_replication_to_master() { }

        virtual void
        xtreemfs_replica_add
        (
          const string& file_id,
          const org::xtreemfs::interfaces::Replica& new_replica
        )
        { }

        virtual void
        xtreemfs_replica_list
        (
          const string& file_id,
          org::xtreemfs::interfaces::ReplicaSet& replicas
        )
        { }

        virtual void
        xtreemfs_replica_remove
        (
          const string& file_id,
          const string& osd_uuid,
          org::xtreemfs::interfaces::XCap& delete_xcap
        )
        { }

        virtual void xtreemfs_restore_database( const string& dump_file ) { }

        virtual void
        xtreemfs_restore_file
        (
          const string& file_path,
          const string& file_id,
          uint64_t file_size,
          const string& osd_uuid,
          int32_t stripe_size
        )
        { }

        virtual void xtreemfs_rmvol( const string& volume_name ) { }

        virtual void xtreemfs_shutdown() { }
      };


      // Use this macro in an implementation class to get all of the prototypes for the operations in MRCInterface
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_PROTOTYPES\
      virtual void\
      close\
      (\
        const org::xtreemfs::interfaces::VivaldiCoordinates& client_vivaldi_coordinates,\
        const org::xtreemfs::interfaces::XCap& write_xcap\
      );\
      virtual void\
      fsetattr\
      (\
        const org::xtreemfs::interfaces::Stat& stbuf,\
        uint32_t to_set,\
        const org::xtreemfs::interfaces::XCap& xcap\
      );\
      virtual void\
      ftruncate\
      (\
        const org::xtreemfs::interfaces::XCap& write_xcap,\
        org::xtreemfs::interfaces::XCap& truncate_xcap\
      );\
      virtual void\
      getattr\
      (\
        const string& volume_name,\
        const string& path,\
        uint64_t known_etag,\
        org::xtreemfs::interfaces::StatSet& stbuf\
      );\
      virtual void\
      getxattr\
      (\
        const string& volume_name,\
        const string& path,\
        const string& name,\
        string& value\
      );\
      virtual void\
      link\
      (\
        const string& volume_name,\
        const string& target_path,\
        const string& link_path\
      );\
      virtual void\
      listxattr\
      (\
        const string& volume_name,\
        const string& path,\
        org::xtreemfs::interfaces::StringSet& names\
      );\
      virtual void\
      mkdir\
      (\
        const string& volume_name,\
        const string& path,\
        uint32_t mode\
      );\
      virtual void\
      open\
      (\
        const string& volume_name,\
        const string& path,\
        uint32_t flags,\
        uint32_t mode,\
        uint32_t attributes,\
        const org::xtreemfs::interfaces::VivaldiCoordinates& client_vivaldi_coordinates,\
        org::xtreemfs::interfaces::FileCredentials& file_credentials\
      );\
      virtual void\
      readdir\
      (\
        const string& volume_name,\
        const string& path,\
        uint64_t known_etag,\
        uint16_t limit_directory_entries_count,\
        bool names_only,\
        uint64_t seen_directory_entries_count,\
        org::xtreemfs::interfaces::DirectoryEntrySet& directory_entries\
      );\
      virtual void\
      readlink\
      (\
        const string& volume_name,\
        const string& path,\
        string& link_target_path\
      );\
      virtual void\
      removexattr\
      (\
        const string& volume_name,\
        const string& path,\
        const string& name\
      );\
      virtual void\
      rename\
      (\
        const string& volume_name,\
        const string& source_path,\
        const string& target_path,\
        org::xtreemfs::interfaces::FileCredentialsSet& file_credentials\
      );\
      virtual void rmdir( const string& volume_name, const string& path );\
      virtual void\
      setattr\
      (\
        const string& volume_name,\
        const string& path,\
        const org::xtreemfs::interfaces::Stat& stbuf,\
        uint32_t to_set\
      );\
      virtual void\
      setxattr\
      (\
        const string& volume_name,\
        const string& path,\
        const string& name,\
        const string& value,\
        int32_t flags\
      );\
      virtual void\
      statvfs\
      (\
        const string& volume_name,\
        uint64_t known_etag,\
        org::xtreemfs::interfaces::StatVFSSet& stbuf\
      );\
      virtual void\
      symlink\
      (\
        const string& volume_name,\
        const string& target_path,\
        const string& link_path\
      );\
      virtual void\
      unlink\
      (\
        const string& volume_name,\
        const string& path,\
        org::xtreemfs::interfaces::FileCredentialsSet& file_credentials\
      );\
      virtual void xtreemfs_checkpoint();\
      virtual void\
      xtreemfs_check_file_exists\
      (\
        const string& volume_id,\
        const org::xtreemfs::interfaces::StringSet& file_ids,\
        const string& osd_uuid,\
        string& bitmap\
      );\
      virtual void xtreemfs_dump_database( const string& dump_file );\
      virtual void\
      xtreemfs_get_suitable_osds\
      (\
        const string& file_id,\
        uint32_t num_osds,\
        org::xtreemfs::interfaces::StringSet& osd_uuids\
      );\
      virtual void xtreemfs_internal_debug( const string& operation, string& result );\
      virtual void xtreemfs_lsvol( org::xtreemfs::interfaces::StatVFSSet& volumes );\
      virtual void xtreemfs_mkvol( const org::xtreemfs::interfaces::StatVFS& volume );\
      virtual void\
      xtreemfs_renew_capability\
      (\
        const org::xtreemfs::interfaces::XCap& old_xcap,\
        org::xtreemfs::interfaces::XCap& renewed_xcap\
      );\
      virtual void xtreemfs_replication_to_master();\
      virtual void\
      xtreemfs_replica_add\
      (\
        const string& file_id,\
        const org::xtreemfs::interfaces::Replica& new_replica\
      );\
      virtual void\
      xtreemfs_replica_list\
      (\
        const string& file_id,\
        org::xtreemfs::interfaces::ReplicaSet& replicas\
      );\
      virtual void\
      xtreemfs_replica_remove\
      (\
        const string& file_id,\
        const string& osd_uuid,\
        org::xtreemfs::interfaces::XCap& delete_xcap\
      );\
      virtual void xtreemfs_restore_database( const string& dump_file );\
      virtual void\
      xtreemfs_restore_file\
      (\
        const string& file_path,\
        const string& file_id,\
        uint64_t file_size,\
        const string& osd_uuid,\
        int32_t stripe_size\
      );\
      virtual void xtreemfs_rmvol( const string& volume_name );\
      virtual void xtreemfs_shutdown();\


      #ifndef ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS
      #if defined( ORG_XTREEMFS_INTERFACES_EXCEPTION_RESPONSE_PARENT_CLASS )
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS ORG_XTREEMFS_INTERFACES_EXCEPTION_RESPONSE_PARENT_CLASS
      #elif defined( ORG_XTREEMFS_EXCEPTION_RESPONSE_PARENT_CLASS )
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS ORG_XTREEMFS_EXCEPTION_RESPONSE_PARENT_CLASS
      #elif defined( ORG_EXCEPTION_RESPONSE_PARENT_CLASS )
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS ORG_EXCEPTION_RESPONSE_PARENT_CLASS
      #else
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS ::yield::concurrency::ExceptionResponse
      #endif
      #endif
      #ifndef ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
      #if defined( ORG_XTREEMFS_INTERFACES_REQUEST_PARENT_CLASS )
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS ORG_XTREEMFS_INTERFACES_REQUEST_PARENT_CLASS
      #elif defined( ORG_XTREEMFS_REQUEST_PARENT_CLASS )
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS ORG_XTREEMFS_REQUEST_PARENT_CLASS
      #elif defined( ORG_REQUEST_PARENT_CLASS )
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS ORG_REQUEST_PARENT_CLASS
      #else
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS ::yield::concurrency::Request
      #endif
      #endif
      #ifndef ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
      #if defined( ORG_XTREEMFS_INTERFACES_RESPONSE_PARENT_CLASS )
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS ORG_XTREEMFS_INTERFACES_RESPONSE_PARENT_CLASS
      #elif defined( ORG_XTREEMFS_RESPONSE_PARENT_CLASS )
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS ORG_XTREEMFS_RESPONSE_PARENT_CLASS
      #elif defined( ORG_RESPONSE_PARENT_CLASS )
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS ORG_RESPONSE_PARENT_CLASS
      #else
      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS ::yield::concurrency::Response
      #endif
      #endif


      class MRCInterfaceEvents
      {
      public:
      // Request/response pair definitions for the operations in MRCInterface
        class closeRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          closeRequest() { }

          closeRequest
          (
            const org::xtreemfs::interfaces::VivaldiCoordinates& client_vivaldi_coordinates,
            const org::xtreemfs::interfaces::XCap& write_xcap
          )
            : client_vivaldi_coordinates( client_vivaldi_coordinates ),
              write_xcap( write_xcap )
          { }

          virtual ~closeRequest() {  }

          const org::xtreemfs::interfaces::VivaldiCoordinates& get_client_vivaldi_coordinates() const { return client_vivaldi_coordinates; }
          const org::xtreemfs::interfaces::XCap& get_write_xcap() const { return write_xcap; }
          void set_client_vivaldi_coordinates( const org::xtreemfs::interfaces::VivaldiCoordinates&  client_vivaldi_coordinates ) { this->client_vivaldi_coordinates = client_vivaldi_coordinates; }
          void set_write_xcap( const org::xtreemfs::interfaces::XCap&  write_xcap ) { this->write_xcap = write_xcap; }


          virtual void respond()
          {
            respond( *new closeResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const closeRequest& other ) const
          {
            return client_vivaldi_coordinates == other.client_vivaldi_coordinates
                   &&
                   write_xcap == other.write_xcap;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( closeRequest, 2010031117 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "client_vivaldi_coordinates", 0, client_vivaldi_coordinates );
            marshaller.write( "write_xcap", 0, write_xcap );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "client_vivaldi_coordinates", 0, client_vivaldi_coordinates );
            unmarshaller.read( "write_xcap", 0, write_xcap );
          }

        protected:
          org::xtreemfs::interfaces::VivaldiCoordinates client_vivaldi_coordinates;
          org::xtreemfs::interfaces::XCap write_xcap;
        };


        class closeResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          closeResponse() { }
          virtual ~closeResponse() {  }

          bool operator==( const closeResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( closeResponse, 2010031117 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class fsetattrRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          fsetattrRequest()
            : to_set( 0 )
          { }

          fsetattrRequest
          (
            const org::xtreemfs::interfaces::Stat& stbuf,
            uint32_t to_set,
            const org::xtreemfs::interfaces::XCap& xcap
          )
            : stbuf( stbuf ), to_set( to_set ), xcap( xcap )
          { }

          virtual ~fsetattrRequest() {  }

          const org::xtreemfs::interfaces::Stat& get_stbuf() const { return stbuf; }
          uint32_t get_to_set() const { return to_set; }
          const org::xtreemfs::interfaces::XCap& get_xcap() const { return xcap; }
          void set_stbuf( const org::xtreemfs::interfaces::Stat&  stbuf ) { this->stbuf = stbuf; }
          void set_to_set( uint32_t to_set ) { this->to_set = to_set; }
          void set_xcap( const org::xtreemfs::interfaces::XCap&  xcap ) { this->xcap = xcap; }


          virtual void respond()
          {
            respond( *new fsetattrResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const fsetattrRequest& other ) const
          {
            return stbuf == other.stbuf
                   &&
                   to_set == other.to_set
                   &&
                   xcap == other.xcap;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( fsetattrRequest, 2010031118 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "stbuf", 0, stbuf );
            marshaller.write( "to_set", 0, to_set );
            marshaller.write( "xcap", 0, xcap );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "stbuf", 0, stbuf );
            to_set = unmarshaller.read_uint32( "to_set", 0 );
            unmarshaller.read( "xcap", 0, xcap );
          }

        protected:
          org::xtreemfs::interfaces::Stat stbuf;
          uint32_t to_set;
          org::xtreemfs::interfaces::XCap xcap;
        };


        class fsetattrResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          fsetattrResponse() { }
          virtual ~fsetattrResponse() {  }

          bool operator==( const fsetattrResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( fsetattrResponse, 2010031118 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class ftruncateRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          ftruncateRequest() { }

          ftruncateRequest( const org::xtreemfs::interfaces::XCap& write_xcap )
            : write_xcap( write_xcap )
          { }

          virtual ~ftruncateRequest() {  }

          const org::xtreemfs::interfaces::XCap& get_write_xcap() const { return write_xcap; }
          void set_write_xcap( const org::xtreemfs::interfaces::XCap&  write_xcap ) { this->write_xcap = write_xcap; }


          virtual void respond( const org::xtreemfs::interfaces::XCap& truncate_xcap )
          {
            respond( *new ftruncateResponse( truncate_xcap ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const ftruncateRequest& other ) const
          {
            return write_xcap == other.write_xcap;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( ftruncateRequest, 2010031119 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "write_xcap", 0, write_xcap );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "write_xcap", 0, write_xcap );
          }

        protected:
          org::xtreemfs::interfaces::XCap write_xcap;
        };


        class ftruncateResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          ftruncateResponse() { }

          ftruncateResponse( const org::xtreemfs::interfaces::XCap& truncate_xcap )
            : truncate_xcap( truncate_xcap )
          { }

          virtual ~ftruncateResponse() {  }

          const org::xtreemfs::interfaces::XCap& get_truncate_xcap() const { return truncate_xcap; }
          void set_truncate_xcap( const org::xtreemfs::interfaces::XCap&  truncate_xcap ) { this->truncate_xcap = truncate_xcap; }

          bool operator==( const ftruncateResponse& other ) const
          {
            return truncate_xcap == other.truncate_xcap;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( ftruncateResponse, 2010031119 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "truncate_xcap", 0, truncate_xcap );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "truncate_xcap", 0, truncate_xcap );
          }

        protected:
          org::xtreemfs::interfaces::XCap truncate_xcap;
        };


        class getattrRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          getattrRequest()
            : known_etag( 0 )
          { }

          getattrRequest
          (
            const string& volume_name,
            const string& path,
            uint64_t known_etag
          )
            : volume_name( volume_name ), path( path ), known_etag( known_etag )
          { }

          virtual ~getattrRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          uint64_t get_known_etag() const { return known_etag; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }
          void set_known_etag( uint64_t known_etag ) { this->known_etag = known_etag; }


          virtual void respond( const org::xtreemfs::interfaces::StatSet& stbuf )
          {
            respond( *new getattrResponse( stbuf ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const getattrRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path
                   &&
                   known_etag == other.known_etag;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( getattrRequest, 2010031120 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
            marshaller.write( "known_etag", 0, known_etag );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
            known_etag = unmarshaller.read_uint64( "known_etag", 0 );
          }

        protected:
          string volume_name;
          string path;
          uint64_t known_etag;
        };


        class getattrResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          getattrResponse() { }

          getattrResponse( const org::xtreemfs::interfaces::StatSet& stbuf )
            : stbuf( stbuf )
          { }

          virtual ~getattrResponse() {  }

          const org::xtreemfs::interfaces::StatSet& get_stbuf() const { return stbuf; }
          void set_stbuf( const org::xtreemfs::interfaces::StatSet&  stbuf ) { this->stbuf = stbuf; }

          bool operator==( const getattrResponse& other ) const
          {
            return stbuf == other.stbuf;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( getattrResponse, 2010031120 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "stbuf", 0, stbuf );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "stbuf", 0, stbuf );
          }

        protected:
          org::xtreemfs::interfaces::StatSet stbuf;
        };


        class getxattrRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          getxattrRequest() { }

          getxattrRequest
          (
            const string& volume_name,
            const string& path,
            const string& name
          )
            : volume_name( volume_name ), path( path ), name( name )
          { }

          virtual ~getxattrRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          const string& get_name() const { return name; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }
          void set_name( const string& name ) { this->name = name; }


          virtual void respond( const string& value )
          {
            respond( *new getxattrResponse( value ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const getxattrRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path
                   &&
                   name == other.name;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( getxattrRequest, 2010031121 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
            marshaller.write( "name", 0, name );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
            unmarshaller.read( "name", 0, name );
          }

        protected:
          string volume_name;
          string path;
          string name;
        };


        class getxattrResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          getxattrResponse() { }

          getxattrResponse( const string& value )
            : value( value )
          { }

          virtual ~getxattrResponse() {  }

          const string& get_value() const { return value; }
          void set_value( const string& value ) { this->value = value; }

          bool operator==( const getxattrResponse& other ) const
          {
            return value == other.value;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( getxattrResponse, 2010031121 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "value", 0, value );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "value", 0, value );
          }

        protected:
          string value;
        };


        class linkRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          linkRequest() { }

          linkRequest
          (
            const string& volume_name,
            const string& target_path,
            const string& link_path
          )
            : volume_name( volume_name ), target_path( target_path ), link_path( link_path )
          { }

          virtual ~linkRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_target_path() const { return target_path; }
          const string& get_link_path() const { return link_path; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_target_path( const string& target_path ) { this->target_path = target_path; }
          void set_link_path( const string& link_path ) { this->link_path = link_path; }


          virtual void respond()
          {
            respond( *new linkResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const linkRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   target_path == other.target_path
                   &&
                   link_path == other.link_path;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( linkRequest, 2010031122 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "target_path", 0, target_path );
            marshaller.write( "link_path", 0, link_path );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "target_path", 0, target_path );
            unmarshaller.read( "link_path", 0, link_path );
          }

        protected:
          string volume_name;
          string target_path;
          string link_path;
        };


        class linkResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          linkResponse() { }
          virtual ~linkResponse() {  }

          bool operator==( const linkResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( linkResponse, 2010031122 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class listxattrRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          listxattrRequest() { }

          listxattrRequest( const string& volume_name, const string& path )
            : volume_name( volume_name ), path( path )
          { }

          virtual ~listxattrRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }


          virtual void respond( const org::xtreemfs::interfaces::StringSet& names )
          {
            respond( *new listxattrResponse( names ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const listxattrRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( listxattrRequest, 2010031123 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
          }

        protected:
          string volume_name;
          string path;
        };


        class listxattrResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          listxattrResponse() { }

          listxattrResponse( const org::xtreemfs::interfaces::StringSet& names )
            : names( names )
          { }

          virtual ~listxattrResponse() {  }

          const org::xtreemfs::interfaces::StringSet& get_names() const { return names; }
          void set_names( const org::xtreemfs::interfaces::StringSet&  names ) { this->names = names; }

          bool operator==( const listxattrResponse& other ) const
          {
            return names == other.names;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( listxattrResponse, 2010031123 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "names", 0, names );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "names", 0, names );
          }

        protected:
          org::xtreemfs::interfaces::StringSet names;
        };


        class mkdirRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          mkdirRequest()
            : mode( 0 )
          { }

          mkdirRequest( const string& volume_name, const string& path, uint32_t mode )
            : volume_name( volume_name ), path( path ), mode( mode )
          { }

          virtual ~mkdirRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          uint32_t get_mode() const { return mode; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }
          void set_mode( uint32_t mode ) { this->mode = mode; }


          virtual void respond()
          {
            respond( *new mkdirResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const mkdirRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path
                   &&
                   mode == other.mode;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( mkdirRequest, 2010031124 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
            marshaller.write( "mode", 0, mode );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
            mode = unmarshaller.read_uint32( "mode", 0 );
          }

        protected:
          string volume_name;
          string path;
          uint32_t mode;
        };


        class mkdirResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          mkdirResponse() { }
          virtual ~mkdirResponse() {  }

          bool operator==( const mkdirResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( mkdirResponse, 2010031124 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class openRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          openRequest()
            : flags( 0 ), mode( 0 ), attributes( 0 )
          { }

          openRequest
          (
            const string& volume_name,
            const string& path,
            uint32_t flags,
            uint32_t mode,
            uint32_t attributes,
            const org::xtreemfs::interfaces::VivaldiCoordinates& client_vivaldi_coordinates
          )
            : volume_name( volume_name ),
              path( path ),
              flags( flags ),
              mode( mode ),
              attributes( attributes ),
              client_vivaldi_coordinates( client_vivaldi_coordinates )
          { }

          virtual ~openRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          uint32_t get_flags() const { return flags; }
          uint32_t get_mode() const { return mode; }
          uint32_t get_attributes() const { return attributes; }
          const org::xtreemfs::interfaces::VivaldiCoordinates& get_client_vivaldi_coordinates() const { return client_vivaldi_coordinates; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }
          void set_flags( uint32_t flags ) { this->flags = flags; }
          void set_mode( uint32_t mode ) { this->mode = mode; }
          void set_attributes( uint32_t attributes ) { this->attributes = attributes; }
          void set_client_vivaldi_coordinates( const org::xtreemfs::interfaces::VivaldiCoordinates&  client_vivaldi_coordinates ) { this->client_vivaldi_coordinates = client_vivaldi_coordinates; }


          virtual void
          respond
          (
            const org::xtreemfs::interfaces::FileCredentials& file_credentials
          )
          {
            respond
            (
              *new openResponse
                   (
                     file_credentials
                   )
            );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const openRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path
                   &&
                   flags == other.flags
                   &&
                   mode == other.mode
                   &&
                   attributes == other.attributes
                   &&
                   client_vivaldi_coordinates == other.client_vivaldi_coordinates;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( openRequest, 2010031125 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
            marshaller.write( "flags", 0, flags );
            marshaller.write( "mode", 0, mode );
            marshaller.write( "attributes", 0, attributes );
            marshaller.write( "client_vivaldi_coordinates", 0, client_vivaldi_coordinates );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
            flags = unmarshaller.read_uint32( "flags", 0 );
            mode = unmarshaller.read_uint32( "mode", 0 );
            attributes = unmarshaller.read_uint32( "attributes", 0 );
            unmarshaller.read( "client_vivaldi_coordinates", 0, client_vivaldi_coordinates );
          }

        protected:
          string volume_name;
          string path;
          uint32_t flags;
          uint32_t mode;
          uint32_t attributes;
          org::xtreemfs::interfaces::VivaldiCoordinates client_vivaldi_coordinates;
        };


        class openResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          openResponse() { }

          openResponse
          (
            const org::xtreemfs::interfaces::FileCredentials& file_credentials
          )
            : file_credentials( file_credentials )
          { }

          virtual ~openResponse() {  }

          const org::xtreemfs::interfaces::FileCredentials& get_file_credentials() const { return file_credentials; }
          void set_file_credentials( const org::xtreemfs::interfaces::FileCredentials&  file_credentials ) { this->file_credentials = file_credentials; }

          bool operator==( const openResponse& other ) const
          {
            return file_credentials == other.file_credentials;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( openResponse, 2010031125 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "file_credentials", 0, file_credentials );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "file_credentials", 0, file_credentials );
          }

        protected:
          org::xtreemfs::interfaces::FileCredentials file_credentials;
        };


        class readdirRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          readdirRequest()
            : known_etag( 0 ),
              limit_directory_entries_count( 0 ),
              names_only( false ),
              seen_directory_entries_count( 0 )
          { }

          readdirRequest
          (
            const string& volume_name,
            const string& path,
            uint64_t known_etag,
            uint16_t limit_directory_entries_count,
            bool names_only,
            uint64_t seen_directory_entries_count
          )
            : volume_name( volume_name ),
              path( path ),
              known_etag( known_etag ),
              limit_directory_entries_count( limit_directory_entries_count ),
              names_only( names_only ),
              seen_directory_entries_count( seen_directory_entries_count )
          { }

          virtual ~readdirRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          uint64_t get_known_etag() const { return known_etag; }
          uint16_t get_limit_directory_entries_count() const { return limit_directory_entries_count; }
          bool get_names_only() const { return names_only; }
          uint64_t get_seen_directory_entries_count() const { return seen_directory_entries_count; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }
          void set_known_etag( uint64_t known_etag ) { this->known_etag = known_etag; }
          void set_limit_directory_entries_count( uint16_t limit_directory_entries_count ) { this->limit_directory_entries_count = limit_directory_entries_count; }
          void set_names_only( bool names_only ) { this->names_only = names_only; }
          void set_seen_directory_entries_count( uint64_t seen_directory_entries_count ) { this->seen_directory_entries_count = seen_directory_entries_count; }


          virtual void
          respond
          (
            const org::xtreemfs::interfaces::DirectoryEntrySet& directory_entries
          )
          {
            respond
            (
              *new readdirResponse
                   (
                     directory_entries
                   )
            );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const readdirRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path
                   &&
                   known_etag == other.known_etag
                   &&
                   limit_directory_entries_count == other.limit_directory_entries_count
                   &&
                   names_only == other.names_only
                   &&
                   seen_directory_entries_count == other.seen_directory_entries_count;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( readdirRequest, 2010031126 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
            marshaller.write( "known_etag", 0, known_etag );
            marshaller.write( "limit_directory_entries_count", 0, limit_directory_entries_count );
            marshaller.write( "names_only", 0, names_only );
            marshaller.write( "seen_directory_entries_count", 0, seen_directory_entries_count );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
            known_etag = unmarshaller.read_uint64( "known_etag", 0 );
            limit_directory_entries_count = unmarshaller.read_uint16( "limit_directory_entries_count", 0 );
            names_only = unmarshaller.read_bool( "names_only", 0 );
            seen_directory_entries_count = unmarshaller.read_uint64( "seen_directory_entries_count", 0 );
          }

        protected:
          string volume_name;
          string path;
          uint64_t known_etag;
          uint16_t limit_directory_entries_count;
          bool names_only;
          uint64_t seen_directory_entries_count;
        };


        class readdirResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          readdirResponse() { }

          readdirResponse
          (
            const org::xtreemfs::interfaces::DirectoryEntrySet& directory_entries
          )
            : directory_entries( directory_entries )
          { }

          virtual ~readdirResponse() {  }

          const org::xtreemfs::interfaces::DirectoryEntrySet& get_directory_entries() const { return directory_entries; }
          void set_directory_entries( const org::xtreemfs::interfaces::DirectoryEntrySet&  directory_entries ) { this->directory_entries = directory_entries; }

          bool operator==( const readdirResponse& other ) const
          {
            return directory_entries == other.directory_entries;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( readdirResponse, 2010031126 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "directory_entries", 0, directory_entries );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "directory_entries", 0, directory_entries );
          }

        protected:
          org::xtreemfs::interfaces::DirectoryEntrySet directory_entries;
        };


        class readlinkRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          readlinkRequest() { }

          readlinkRequest( const string& volume_name, const string& path )
            : volume_name( volume_name ), path( path )
          { }

          virtual ~readlinkRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }


          virtual void respond( const string& link_target_path )
          {
            respond( *new readlinkResponse( link_target_path ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const readlinkRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( readlinkRequest, 2010031127 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
          }

        protected:
          string volume_name;
          string path;
        };


        class readlinkResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          readlinkResponse() { }

          readlinkResponse( const string& link_target_path )
            : link_target_path( link_target_path )
          { }

          virtual ~readlinkResponse() {  }

          const string& get_link_target_path() const { return link_target_path; }
          void set_link_target_path( const string& link_target_path ) { this->link_target_path = link_target_path; }

          bool operator==( const readlinkResponse& other ) const
          {
            return link_target_path == other.link_target_path;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( readlinkResponse, 2010031127 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "link_target_path", 0, link_target_path );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "link_target_path", 0, link_target_path );
          }

        protected:
          string link_target_path;
        };


        class removexattrRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          removexattrRequest() { }

          removexattrRequest
          (
            const string& volume_name,
            const string& path,
            const string& name
          )
            : volume_name( volume_name ), path( path ), name( name )
          { }

          virtual ~removexattrRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          const string& get_name() const { return name; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }
          void set_name( const string& name ) { this->name = name; }


          virtual void respond()
          {
            respond( *new removexattrResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const removexattrRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path
                   &&
                   name == other.name;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( removexattrRequest, 2010031128 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
            marshaller.write( "name", 0, name );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
            unmarshaller.read( "name", 0, name );
          }

        protected:
          string volume_name;
          string path;
          string name;
        };


        class removexattrResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          removexattrResponse() { }
          virtual ~removexattrResponse() {  }

          bool operator==( const removexattrResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( removexattrResponse, 2010031128 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class renameRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          renameRequest() { }

          renameRequest
          (
            const string& volume_name,
            const string& source_path,
            const string& target_path
          )
            : volume_name( volume_name ),
              source_path( source_path ),
              target_path( target_path )
          { }

          virtual ~renameRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_source_path() const { return source_path; }
          const string& get_target_path() const { return target_path; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_source_path( const string& source_path ) { this->source_path = source_path; }
          void set_target_path( const string& target_path ) { this->target_path = target_path; }


          virtual void
          respond
          (
            const org::xtreemfs::interfaces::FileCredentialsSet& file_credentials
          )
          {
            respond
            (
              *new renameResponse
                   (
                     file_credentials
                   )
            );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const renameRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   source_path == other.source_path
                   &&
                   target_path == other.target_path;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( renameRequest, 2010031129 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "source_path", 0, source_path );
            marshaller.write( "target_path", 0, target_path );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "source_path", 0, source_path );
            unmarshaller.read( "target_path", 0, target_path );
          }

        protected:
          string volume_name;
          string source_path;
          string target_path;
        };


        class renameResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          renameResponse() { }

          renameResponse
          (
            const org::xtreemfs::interfaces::FileCredentialsSet& file_credentials
          )
            : file_credentials( file_credentials )
          { }

          virtual ~renameResponse() {  }

          const org::xtreemfs::interfaces::FileCredentialsSet& get_file_credentials() const { return file_credentials; }
          void set_file_credentials( const org::xtreemfs::interfaces::FileCredentialsSet&  file_credentials ) { this->file_credentials = file_credentials; }

          bool operator==( const renameResponse& other ) const
          {
            return file_credentials == other.file_credentials;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( renameResponse, 2010031129 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "file_credentials", 0, file_credentials );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "file_credentials", 0, file_credentials );
          }

        protected:
          org::xtreemfs::interfaces::FileCredentialsSet file_credentials;
        };


        class rmdirRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          rmdirRequest() { }

          rmdirRequest( const string& volume_name, const string& path )
            : volume_name( volume_name ), path( path )
          { }

          virtual ~rmdirRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }


          virtual void respond()
          {
            respond( *new rmdirResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const rmdirRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( rmdirRequest, 2010031130 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
          }

        protected:
          string volume_name;
          string path;
        };


        class rmdirResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          rmdirResponse() { }
          virtual ~rmdirResponse() {  }

          bool operator==( const rmdirResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( rmdirResponse, 2010031130 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class setattrRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          setattrRequest()
            : to_set( 0 )
          { }

          setattrRequest
          (
            const string& volume_name,
            const string& path,
            const org::xtreemfs::interfaces::Stat& stbuf,
            uint32_t to_set
          )
            : volume_name( volume_name ), path( path ), stbuf( stbuf ), to_set( to_set )
          { }

          virtual ~setattrRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          const org::xtreemfs::interfaces::Stat& get_stbuf() const { return stbuf; }
          uint32_t get_to_set() const { return to_set; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }
          void set_stbuf( const org::xtreemfs::interfaces::Stat&  stbuf ) { this->stbuf = stbuf; }
          void set_to_set( uint32_t to_set ) { this->to_set = to_set; }


          virtual void respond()
          {
            respond( *new setattrResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const setattrRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path
                   &&
                   stbuf == other.stbuf
                   &&
                   to_set == other.to_set;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( setattrRequest, 2010031131 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
            marshaller.write( "stbuf", 0, stbuf );
            marshaller.write( "to_set", 0, to_set );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
            unmarshaller.read( "stbuf", 0, stbuf );
            to_set = unmarshaller.read_uint32( "to_set", 0 );
          }

        protected:
          string volume_name;
          string path;
          org::xtreemfs::interfaces::Stat stbuf;
          uint32_t to_set;
        };


        class setattrResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          setattrResponse() { }
          virtual ~setattrResponse() {  }

          bool operator==( const setattrResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( setattrResponse, 2010031131 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class setxattrRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          setxattrRequest()
            : flags( 0 )
          { }

          setxattrRequest
          (
            const string& volume_name,
            const string& path,
            const string& name,
            const string& value,
            int32_t flags
          )
            : volume_name( volume_name ),
              path( path ),
              name( name ),
              value( value ),
              flags( flags )
          { }

          virtual ~setxattrRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          const string& get_name() const { return name; }
          const string& get_value() const { return value; }
          int32_t get_flags() const { return flags; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }
          void set_name( const string& name ) { this->name = name; }
          void set_value( const string& value ) { this->value = value; }
          void set_flags( int32_t flags ) { this->flags = flags; }


          virtual void respond()
          {
            respond( *new setxattrResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const setxattrRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path
                   &&
                   name == other.name
                   &&
                   value == other.value
                   &&
                   flags == other.flags;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( setxattrRequest, 2010031132 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
            marshaller.write( "name", 0, name );
            marshaller.write( "value", 0, value );
            marshaller.write( "flags", 0, flags );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
            unmarshaller.read( "name", 0, name );
            unmarshaller.read( "value", 0, value );
            flags = unmarshaller.read_int32( "flags", 0 );
          }

        protected:
          string volume_name;
          string path;
          string name;
          string value;
          int32_t flags;
        };


        class setxattrResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          setxattrResponse() { }
          virtual ~setxattrResponse() {  }

          bool operator==( const setxattrResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( setxattrResponse, 2010031132 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class statvfsRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          statvfsRequest()
            : known_etag( 0 )
          { }

          statvfsRequest( const string& volume_name, uint64_t known_etag )
            : volume_name( volume_name ), known_etag( known_etag )
          { }

          virtual ~statvfsRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          uint64_t get_known_etag() const { return known_etag; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_known_etag( uint64_t known_etag ) { this->known_etag = known_etag; }


          virtual void respond( const org::xtreemfs::interfaces::StatVFSSet& stbuf )
          {
            respond( *new statvfsResponse( stbuf ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const statvfsRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   known_etag == other.known_etag;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( statvfsRequest, 2010031133 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "known_etag", 0, known_etag );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            known_etag = unmarshaller.read_uint64( "known_etag", 0 );
          }

        protected:
          string volume_name;
          uint64_t known_etag;
        };


        class statvfsResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          statvfsResponse() { }

          statvfsResponse( const org::xtreemfs::interfaces::StatVFSSet& stbuf )
            : stbuf( stbuf )
          { }

          virtual ~statvfsResponse() {  }

          const org::xtreemfs::interfaces::StatVFSSet& get_stbuf() const { return stbuf; }
          void set_stbuf( const org::xtreemfs::interfaces::StatVFSSet&  stbuf ) { this->stbuf = stbuf; }

          bool operator==( const statvfsResponse& other ) const
          {
            return stbuf == other.stbuf;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( statvfsResponse, 2010031133 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "stbuf", 0, stbuf );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "stbuf", 0, stbuf );
          }

        protected:
          org::xtreemfs::interfaces::StatVFSSet stbuf;
        };


        class symlinkRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          symlinkRequest() { }

          symlinkRequest
          (
            const string& volume_name,
            const string& target_path,
            const string& link_path
          )
            : volume_name( volume_name ), target_path( target_path ), link_path( link_path )
          { }

          virtual ~symlinkRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_target_path() const { return target_path; }
          const string& get_link_path() const { return link_path; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_target_path( const string& target_path ) { this->target_path = target_path; }
          void set_link_path( const string& link_path ) { this->link_path = link_path; }


          virtual void respond()
          {
            respond( *new symlinkResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const symlinkRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   target_path == other.target_path
                   &&
                   link_path == other.link_path;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( symlinkRequest, 2010031134 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "target_path", 0, target_path );
            marshaller.write( "link_path", 0, link_path );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "target_path", 0, target_path );
            unmarshaller.read( "link_path", 0, link_path );
          }

        protected:
          string volume_name;
          string target_path;
          string link_path;
        };


        class symlinkResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          symlinkResponse() { }
          virtual ~symlinkResponse() {  }

          bool operator==( const symlinkResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( symlinkResponse, 2010031134 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class unlinkRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          unlinkRequest() { }

          unlinkRequest( const string& volume_name, const string& path )
            : volume_name( volume_name ), path( path )
          { }

          virtual ~unlinkRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          const string& get_path() const { return path; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }
          void set_path( const string& path ) { this->path = path; }


          virtual void
          respond
          (
            const org::xtreemfs::interfaces::FileCredentialsSet& file_credentials
          )
          {
            respond
            (
              *new unlinkResponse
                   (
                     file_credentials
                   )
            );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const unlinkRequest& other ) const
          {
            return volume_name == other.volume_name
                   &&
                   path == other.path;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( unlinkRequest, 2010031135 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
            marshaller.write( "path", 0, path );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
            unmarshaller.read( "path", 0, path );
          }

        protected:
          string volume_name;
          string path;
        };


        class unlinkResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          unlinkResponse() { }

          unlinkResponse
          (
            const org::xtreemfs::interfaces::FileCredentialsSet& file_credentials
          )
            : file_credentials( file_credentials )
          { }

          virtual ~unlinkResponse() {  }

          const org::xtreemfs::interfaces::FileCredentialsSet& get_file_credentials() const { return file_credentials; }
          void set_file_credentials( const org::xtreemfs::interfaces::FileCredentialsSet&  file_credentials ) { this->file_credentials = file_credentials; }

          bool operator==( const unlinkResponse& other ) const
          {
            return file_credentials == other.file_credentials;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( unlinkResponse, 2010031135 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "file_credentials", 0, file_credentials );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "file_credentials", 0, file_credentials );
          }

        protected:
          org::xtreemfs::interfaces::FileCredentialsSet file_credentials;
        };


        class xtreemfs_checkpointRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_checkpointRequest() { }
          virtual ~xtreemfs_checkpointRequest() {  }


          virtual void respond()
          {
            respond( *new xtreemfs_checkpointResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_checkpointRequest& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_checkpointRequest, 2010031146 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_checkpointResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_checkpointResponse() { }
          virtual ~xtreemfs_checkpointResponse() {  }

          bool operator==( const xtreemfs_checkpointResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_checkpointResponse, 2010031146 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_check_file_existsRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_check_file_existsRequest() { }

          xtreemfs_check_file_existsRequest
          (
            const string& volume_id,
            const org::xtreemfs::interfaces::StringSet& file_ids,
            const string& osd_uuid
          )
            : volume_id( volume_id ), file_ids( file_ids ), osd_uuid( osd_uuid )
          { }

          virtual ~xtreemfs_check_file_existsRequest() {  }

          const string& get_volume_id() const { return volume_id; }
          const org::xtreemfs::interfaces::StringSet& get_file_ids() const { return file_ids; }
          const string& get_osd_uuid() const { return osd_uuid; }
          void set_volume_id( const string& volume_id ) { this->volume_id = volume_id; }
          void set_file_ids( const org::xtreemfs::interfaces::StringSet&  file_ids ) { this->file_ids = file_ids; }
          void set_osd_uuid( const string& osd_uuid ) { this->osd_uuid = osd_uuid; }


          virtual void respond( const string& bitmap )
          {
            respond( *new xtreemfs_check_file_existsResponse( bitmap ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_check_file_existsRequest& other ) const
          {
            return volume_id == other.volume_id
                   &&
                   file_ids == other.file_ids
                   &&
                   osd_uuid == other.osd_uuid;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_check_file_existsRequest, 2010031147 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_id", 0, volume_id );
            marshaller.write( "file_ids", 0, file_ids );
            marshaller.write( "osd_uuid", 0, osd_uuid );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_id", 0, volume_id );
            unmarshaller.read( "file_ids", 0, file_ids );
            unmarshaller.read( "osd_uuid", 0, osd_uuid );
          }

        protected:
          string volume_id;
          org::xtreemfs::interfaces::StringSet file_ids;
          string osd_uuid;
        };


        class xtreemfs_check_file_existsResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_check_file_existsResponse() { }

          xtreemfs_check_file_existsResponse( const string& bitmap )
            : bitmap( bitmap )
          { }

          virtual ~xtreemfs_check_file_existsResponse() {  }

          const string& get_bitmap() const { return bitmap; }
          void set_bitmap( const string& bitmap ) { this->bitmap = bitmap; }

          bool operator==( const xtreemfs_check_file_existsResponse& other ) const
          {
            return bitmap == other.bitmap;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_check_file_existsResponse, 2010031147 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "bitmap", 0, bitmap );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "bitmap", 0, bitmap );
          }

        protected:
          string bitmap;
        };


        class xtreemfs_dump_databaseRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_dump_databaseRequest() { }

          xtreemfs_dump_databaseRequest( const string& dump_file )
            : dump_file( dump_file )
          { }

          virtual ~xtreemfs_dump_databaseRequest() {  }

          const string& get_dump_file() const { return dump_file; }
          void set_dump_file( const string& dump_file ) { this->dump_file = dump_file; }


          virtual void respond()
          {
            respond( *new xtreemfs_dump_databaseResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_dump_databaseRequest& other ) const
          {
            return dump_file == other.dump_file;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_dump_databaseRequest, 2010031148 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "dump_file", 0, dump_file );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "dump_file", 0, dump_file );
          }

        protected:
          string dump_file;
        };


        class xtreemfs_dump_databaseResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_dump_databaseResponse() { }
          virtual ~xtreemfs_dump_databaseResponse() {  }

          bool operator==( const xtreemfs_dump_databaseResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_dump_databaseResponse, 2010031148 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_get_suitable_osdsRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_get_suitable_osdsRequest()
            : num_osds( 0 )
          { }

          xtreemfs_get_suitable_osdsRequest( const string& file_id, uint32_t num_osds )
            : file_id( file_id ), num_osds( num_osds )
          { }

          virtual ~xtreemfs_get_suitable_osdsRequest() {  }

          const string& get_file_id() const { return file_id; }
          uint32_t get_num_osds() const { return num_osds; }
          void set_file_id( const string& file_id ) { this->file_id = file_id; }
          void set_num_osds( uint32_t num_osds ) { this->num_osds = num_osds; }


          virtual void respond( const org::xtreemfs::interfaces::StringSet& osd_uuids )
          {
            respond( *new xtreemfs_get_suitable_osdsResponse( osd_uuids ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_get_suitable_osdsRequest& other ) const
          {
            return file_id == other.file_id
                   &&
                   num_osds == other.num_osds;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_get_suitable_osdsRequest, 2010031149 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "file_id", 0, file_id );
            marshaller.write( "num_osds", 0, num_osds );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "file_id", 0, file_id );
            num_osds = unmarshaller.read_uint32( "num_osds", 0 );
          }

        protected:
          string file_id;
          uint32_t num_osds;
        };


        class xtreemfs_get_suitable_osdsResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_get_suitable_osdsResponse() { }

          xtreemfs_get_suitable_osdsResponse
          (
            const org::xtreemfs::interfaces::StringSet& osd_uuids
          )
            : osd_uuids( osd_uuids )
          { }

          virtual ~xtreemfs_get_suitable_osdsResponse() {  }

          const org::xtreemfs::interfaces::StringSet& get_osd_uuids() const { return osd_uuids; }
          void set_osd_uuids( const org::xtreemfs::interfaces::StringSet&  osd_uuids ) { this->osd_uuids = osd_uuids; }

          bool operator==( const xtreemfs_get_suitable_osdsResponse& other ) const
          {
            return osd_uuids == other.osd_uuids;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_get_suitable_osdsResponse, 2010031149 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "osd_uuids", 0, osd_uuids );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "osd_uuids", 0, osd_uuids );
          }

        protected:
          org::xtreemfs::interfaces::StringSet osd_uuids;
        };


        class xtreemfs_internal_debugRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_internal_debugRequest() { }

          xtreemfs_internal_debugRequest( const string& operation )
            : operation( operation )
          { }

          virtual ~xtreemfs_internal_debugRequest() {  }

          const string& get_operation() const { return operation; }
          void set_operation( const string& operation ) { this->operation = operation; }


          virtual void respond( const string& result )
          {
            respond( *new xtreemfs_internal_debugResponse( result ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_internal_debugRequest& other ) const
          {
            return operation == other.operation;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_internal_debugRequest, 2010031150 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "operation", 0, operation );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "operation", 0, operation );
          }

        protected:
          string operation;
        };


        class xtreemfs_internal_debugResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_internal_debugResponse() { }

          xtreemfs_internal_debugResponse( const string& result )
            : result( result )
          { }

          virtual ~xtreemfs_internal_debugResponse() {  }

          const string& get_result() const { return result; }
          void set_result( const string& result ) { this->result = result; }

          bool operator==( const xtreemfs_internal_debugResponse& other ) const
          {
            return result == other.result;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_internal_debugResponse, 2010031150 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "result", 0, result );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "result", 0, result );
          }

        protected:
          string result;
        };


        class xtreemfs_lsvolRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_lsvolRequest() { }
          virtual ~xtreemfs_lsvolRequest() {  }


          virtual void respond( const org::xtreemfs::interfaces::StatVFSSet& volumes )
          {
            respond( *new xtreemfs_lsvolResponse( volumes ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_lsvolRequest& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_lsvolRequest, 2010031151 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_lsvolResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_lsvolResponse() { }

          xtreemfs_lsvolResponse( const org::xtreemfs::interfaces::StatVFSSet& volumes )
            : volumes( volumes )
          { }

          virtual ~xtreemfs_lsvolResponse() {  }

          const org::xtreemfs::interfaces::StatVFSSet& get_volumes() const { return volumes; }
          void set_volumes( const org::xtreemfs::interfaces::StatVFSSet&  volumes ) { this->volumes = volumes; }

          bool operator==( const xtreemfs_lsvolResponse& other ) const
          {
            return volumes == other.volumes;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_lsvolResponse, 2010031151 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volumes", 0, volumes );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volumes", 0, volumes );
          }

        protected:
          org::xtreemfs::interfaces::StatVFSSet volumes;
        };


        class xtreemfs_mkvolRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_mkvolRequest() { }

          xtreemfs_mkvolRequest( const org::xtreemfs::interfaces::StatVFS& volume )
            : volume( volume )
          { }

          virtual ~xtreemfs_mkvolRequest() {  }

          const org::xtreemfs::interfaces::StatVFS& get_volume() const { return volume; }
          void set_volume( const org::xtreemfs::interfaces::StatVFS&  volume ) { this->volume = volume; }


          virtual void respond()
          {
            respond( *new xtreemfs_mkvolResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_mkvolRequest& other ) const
          {
            return volume == other.volume;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_mkvolRequest, 2010031152 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume", 0, volume );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume", 0, volume );
          }

        protected:
          org::xtreemfs::interfaces::StatVFS volume;
        };


        class xtreemfs_mkvolResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_mkvolResponse() { }
          virtual ~xtreemfs_mkvolResponse() {  }

          bool operator==( const xtreemfs_mkvolResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_mkvolResponse, 2010031152 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_renew_capabilityRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_renew_capabilityRequest() { }

          xtreemfs_renew_capabilityRequest
          (
            const org::xtreemfs::interfaces::XCap& old_xcap
          )
            : old_xcap( old_xcap )
          { }

          virtual ~xtreemfs_renew_capabilityRequest() {  }

          const org::xtreemfs::interfaces::XCap& get_old_xcap() const { return old_xcap; }
          void set_old_xcap( const org::xtreemfs::interfaces::XCap&  old_xcap ) { this->old_xcap = old_xcap; }


          virtual void respond( const org::xtreemfs::interfaces::XCap& renewed_xcap )
          {
            respond( *new xtreemfs_renew_capabilityResponse( renewed_xcap ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_renew_capabilityRequest& other ) const
          {
            return old_xcap == other.old_xcap;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_renew_capabilityRequest, 2010031153 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "old_xcap", 0, old_xcap );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "old_xcap", 0, old_xcap );
          }

        protected:
          org::xtreemfs::interfaces::XCap old_xcap;
        };


        class xtreemfs_renew_capabilityResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_renew_capabilityResponse() { }

          xtreemfs_renew_capabilityResponse
          (
            const org::xtreemfs::interfaces::XCap& renewed_xcap
          )
            : renewed_xcap( renewed_xcap )
          { }

          virtual ~xtreemfs_renew_capabilityResponse() {  }

          const org::xtreemfs::interfaces::XCap& get_renewed_xcap() const { return renewed_xcap; }
          void set_renewed_xcap( const org::xtreemfs::interfaces::XCap&  renewed_xcap ) { this->renewed_xcap = renewed_xcap; }

          bool operator==( const xtreemfs_renew_capabilityResponse& other ) const
          {
            return renewed_xcap == other.renewed_xcap;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_renew_capabilityResponse, 2010031153 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "renewed_xcap", 0, renewed_xcap );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "renewed_xcap", 0, renewed_xcap );
          }

        protected:
          org::xtreemfs::interfaces::XCap renewed_xcap;
        };


        class xtreemfs_replication_to_masterRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_replication_to_masterRequest() { }
          virtual ~xtreemfs_replication_to_masterRequest() {  }


          virtual void respond()
          {
            respond( *new xtreemfs_replication_to_masterResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_replication_to_masterRequest& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_replication_to_masterRequest, 2010031154 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_replication_to_masterResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_replication_to_masterResponse() { }
          virtual ~xtreemfs_replication_to_masterResponse() {  }

          bool operator==( const xtreemfs_replication_to_masterResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_replication_to_masterResponse, 2010031154 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_replica_addRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_replica_addRequest() { }

          xtreemfs_replica_addRequest
          (
            const string& file_id,
            const org::xtreemfs::interfaces::Replica& new_replica
          )
            : file_id( file_id ), new_replica( new_replica )
          { }

          virtual ~xtreemfs_replica_addRequest() {  }

          const string& get_file_id() const { return file_id; }
          const org::xtreemfs::interfaces::Replica& get_new_replica() const { return new_replica; }
          void set_file_id( const string& file_id ) { this->file_id = file_id; }
          void set_new_replica( const org::xtreemfs::interfaces::Replica&  new_replica ) { this->new_replica = new_replica; }


          virtual void respond()
          {
            respond( *new xtreemfs_replica_addResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_replica_addRequest& other ) const
          {
            return file_id == other.file_id
                   &&
                   new_replica == other.new_replica;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_replica_addRequest, 2010031155 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "file_id", 0, file_id );
            marshaller.write( "new_replica", 0, new_replica );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "file_id", 0, file_id );
            unmarshaller.read( "new_replica", 0, new_replica );
          }

        protected:
          string file_id;
          org::xtreemfs::interfaces::Replica new_replica;
        };


        class xtreemfs_replica_addResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_replica_addResponse() { }
          virtual ~xtreemfs_replica_addResponse() {  }

          bool operator==( const xtreemfs_replica_addResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_replica_addResponse, 2010031155 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_replica_listRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_replica_listRequest() { }

          xtreemfs_replica_listRequest( const string& file_id )
            : file_id( file_id )
          { }

          virtual ~xtreemfs_replica_listRequest() {  }

          const string& get_file_id() const { return file_id; }
          void set_file_id( const string& file_id ) { this->file_id = file_id; }


          virtual void respond( const org::xtreemfs::interfaces::ReplicaSet& replicas )
          {
            respond( *new xtreemfs_replica_listResponse( replicas ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_replica_listRequest& other ) const
          {
            return file_id == other.file_id;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_replica_listRequest, 2010031156 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "file_id", 0, file_id );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "file_id", 0, file_id );
          }

        protected:
          string file_id;
        };


        class xtreemfs_replica_listResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_replica_listResponse() { }

          xtreemfs_replica_listResponse
          (
            const org::xtreemfs::interfaces::ReplicaSet& replicas
          )
            : replicas( replicas )
          { }

          virtual ~xtreemfs_replica_listResponse() {  }

          const org::xtreemfs::interfaces::ReplicaSet& get_replicas() const { return replicas; }
          void set_replicas( const org::xtreemfs::interfaces::ReplicaSet&  replicas ) { this->replicas = replicas; }

          bool operator==( const xtreemfs_replica_listResponse& other ) const
          {
            return replicas == other.replicas;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_replica_listResponse, 2010031156 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "replicas", 0, replicas );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "replicas", 0, replicas );
          }

        protected:
          org::xtreemfs::interfaces::ReplicaSet replicas;
        };


        class xtreemfs_replica_removeRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_replica_removeRequest() { }

          xtreemfs_replica_removeRequest( const string& file_id, const string& osd_uuid )
            : file_id( file_id ), osd_uuid( osd_uuid )
          { }

          virtual ~xtreemfs_replica_removeRequest() {  }

          const string& get_file_id() const { return file_id; }
          const string& get_osd_uuid() const { return osd_uuid; }
          void set_file_id( const string& file_id ) { this->file_id = file_id; }
          void set_osd_uuid( const string& osd_uuid ) { this->osd_uuid = osd_uuid; }


          virtual void respond( const org::xtreemfs::interfaces::XCap& delete_xcap )
          {
            respond( *new xtreemfs_replica_removeResponse( delete_xcap ) );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_replica_removeRequest& other ) const
          {
            return file_id == other.file_id
                   &&
                   osd_uuid == other.osd_uuid;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_replica_removeRequest, 2010031157 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "file_id", 0, file_id );
            marshaller.write( "osd_uuid", 0, osd_uuid );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "file_id", 0, file_id );
            unmarshaller.read( "osd_uuid", 0, osd_uuid );
          }

        protected:
          string file_id;
          string osd_uuid;
        };


        class xtreemfs_replica_removeResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_replica_removeResponse() { }

          xtreemfs_replica_removeResponse
          (
            const org::xtreemfs::interfaces::XCap& delete_xcap
          )
            : delete_xcap( delete_xcap )
          { }

          virtual ~xtreemfs_replica_removeResponse() {  }

          const org::xtreemfs::interfaces::XCap& get_delete_xcap() const { return delete_xcap; }
          void set_delete_xcap( const org::xtreemfs::interfaces::XCap&  delete_xcap ) { this->delete_xcap = delete_xcap; }

          bool operator==( const xtreemfs_replica_removeResponse& other ) const
          {
            return delete_xcap == other.delete_xcap;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_replica_removeResponse, 2010031157 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "delete_xcap", 0, delete_xcap );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "delete_xcap", 0, delete_xcap );
          }

        protected:
          org::xtreemfs::interfaces::XCap delete_xcap;
        };


        class xtreemfs_restore_databaseRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_restore_databaseRequest() { }

          xtreemfs_restore_databaseRequest( const string& dump_file )
            : dump_file( dump_file )
          { }

          virtual ~xtreemfs_restore_databaseRequest() {  }

          const string& get_dump_file() const { return dump_file; }
          void set_dump_file( const string& dump_file ) { this->dump_file = dump_file; }


          virtual void respond()
          {
            respond( *new xtreemfs_restore_databaseResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_restore_databaseRequest& other ) const
          {
            return dump_file == other.dump_file;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_restore_databaseRequest, 2010031158 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "dump_file", 0, dump_file );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "dump_file", 0, dump_file );
          }

        protected:
          string dump_file;
        };


        class xtreemfs_restore_databaseResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_restore_databaseResponse() { }
          virtual ~xtreemfs_restore_databaseResponse() {  }

          bool operator==( const xtreemfs_restore_databaseResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_restore_databaseResponse, 2010031158 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_restore_fileRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_restore_fileRequest()
            : file_size( 0 ), stripe_size( 0 )
          { }

          xtreemfs_restore_fileRequest
          (
            const string& file_path,
            const string& file_id,
            uint64_t file_size,
            const string& osd_uuid,
            int32_t stripe_size
          )
            : file_path( file_path ),
              file_id( file_id ),
              file_size( file_size ),
              osd_uuid( osd_uuid ),
              stripe_size( stripe_size )
          { }

          virtual ~xtreemfs_restore_fileRequest() {  }

          const string& get_file_path() const { return file_path; }
          const string& get_file_id() const { return file_id; }
          uint64_t get_file_size() const { return file_size; }
          const string& get_osd_uuid() const { return osd_uuid; }
          int32_t get_stripe_size() const { return stripe_size; }
          void set_file_path( const string& file_path ) { this->file_path = file_path; }
          void set_file_id( const string& file_id ) { this->file_id = file_id; }
          void set_file_size( uint64_t file_size ) { this->file_size = file_size; }
          void set_osd_uuid( const string& osd_uuid ) { this->osd_uuid = osd_uuid; }
          void set_stripe_size( int32_t stripe_size ) { this->stripe_size = stripe_size; }


          virtual void respond()
          {
            respond( *new xtreemfs_restore_fileResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_restore_fileRequest& other ) const
          {
            return file_path == other.file_path
                   &&
                   file_id == other.file_id
                   &&
                   file_size == other.file_size
                   &&
                   osd_uuid == other.osd_uuid
                   &&
                   stripe_size == other.stripe_size;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_restore_fileRequest, 2010031159 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "file_path", 0, file_path );
            marshaller.write( "file_id", 0, file_id );
            marshaller.write( "file_size", 0, file_size );
            marshaller.write( "osd_uuid", 0, osd_uuid );
            marshaller.write( "stripe_size", 0, stripe_size );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "file_path", 0, file_path );
            unmarshaller.read( "file_id", 0, file_id );
            file_size = unmarshaller.read_uint64( "file_size", 0 );
            unmarshaller.read( "osd_uuid", 0, osd_uuid );
            stripe_size = unmarshaller.read_int32( "stripe_size", 0 );
          }

        protected:
          string file_path;
          string file_id;
          uint64_t file_size;
          string osd_uuid;
          int32_t stripe_size;
        };


        class xtreemfs_restore_fileResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_restore_fileResponse() { }
          virtual ~xtreemfs_restore_fileResponse() {  }

          bool operator==( const xtreemfs_restore_fileResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_restore_fileResponse, 2010031159 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_rmvolRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_rmvolRequest() { }

          xtreemfs_rmvolRequest( const string& volume_name )
            : volume_name( volume_name )
          { }

          virtual ~xtreemfs_rmvolRequest() {  }

          const string& get_volume_name() const { return volume_name; }
          void set_volume_name( const string& volume_name ) { this->volume_name = volume_name; }


          virtual void respond()
          {
            respond( *new xtreemfs_rmvolResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_rmvolRequest& other ) const
          {
            return volume_name == other.volume_name;
          }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_rmvolRequest, 2010031160 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "volume_name", 0, volume_name );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "volume_name", 0, volume_name );
          }

        protected:
          string volume_name;
        };


        class xtreemfs_rmvolResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_rmvolResponse() { }
          virtual ~xtreemfs_rmvolResponse() {  }

          bool operator==( const xtreemfs_rmvolResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_rmvolResponse, 2010031160 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_shutdownRequest : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_REQUEST_PARENT_CLASS
        {
        public:
          xtreemfs_shutdownRequest() { }
          virtual ~xtreemfs_shutdownRequest() {  }


          virtual void respond()
          {
            respond( *new xtreemfs_shutdownResponse() );
          }

          virtual void respond( ::yield::concurrency::Response& response )
          {
            Request::respond( response );
          }

          bool operator==( const xtreemfs_shutdownRequest& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_shutdownRequest, 2010031161 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class xtreemfs_shutdownResponse : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_RESPONSE_PARENT_CLASS
        {
        public:
          xtreemfs_shutdownResponse() { }
          virtual ~xtreemfs_shutdownResponse() {  }

          bool operator==( const xtreemfs_shutdownResponse& ) const { return true; }

          // yidl::runtime::RTTIObject
          YIDL_RUNTIME_RTTI_OBJECT_PROTOTYPES( xtreemfs_shutdownResponse, 2010031161 );

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }
        };


        class ConcurrentModificationException : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS
        {
        public:
          ConcurrentModificationException() { }

          ConcurrentModificationException( const string& stack_trace )
            : stack_trace( stack_trace )
          { }

          ConcurrentModificationException( const char* what ) : ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS( what ) { }
          virtual ~ConcurrentModificationException() throw() { ; }

          const string& get_stack_trace() const { return stack_trace; }
          void set_stack_trace( const string& stack_trace ) { this->stack_trace = stack_trace; }

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "stack_trace", 0, stack_trace );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "stack_trace", 0, stack_trace );
          }

          // yield::concurrency::ExceptionResponse
          virtual ::yield::concurrency::ExceptionResponse* clone() const
          {
            return new ConcurrentModificationException( stack_trace );
          }

          virtual void throwStackClone() const
          {
            throw ConcurrentModificationException( stack_trace );
          }

        protected:
          string stack_trace;
        };


        class errnoException : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS
        {
        public:
          errnoException()
            : error_code( 0 )
          { }

          errnoException
          (
            uint32_t error_code,
            const string& error_message,
            const string& stack_trace
          )
            : error_code( error_code ),
              error_message( error_message ),
              stack_trace( stack_trace )
          { }

          errnoException( const char* what ) : ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS( what ) { }
          virtual ~errnoException() throw() { ; }

          uint32_t get_error_code() const { return error_code; }
          const string& get_error_message() const { return error_message; }
          const string& get_stack_trace() const { return stack_trace; }
          void set_error_code( uint32_t error_code ) { this->error_code = error_code; }
          void set_error_message( const string& error_message ) { this->error_message = error_message; }
          void set_stack_trace( const string& stack_trace ) { this->stack_trace = stack_trace; }

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "error_code", 0, error_code );
            marshaller.write( "error_message", 0, error_message );
            marshaller.write( "stack_trace", 0, stack_trace );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            error_code = unmarshaller.read_uint32( "error_code", 0 );
            unmarshaller.read( "error_message", 0, error_message );
            unmarshaller.read( "stack_trace", 0, stack_trace );
          }

          // yield::concurrency::ExceptionResponse
          virtual ::yield::concurrency::ExceptionResponse* clone() const
          {
            return new errnoException( error_code, error_message, stack_trace );
          }

          virtual void throwStackClone() const
          {
            throw errnoException( error_code, error_message, stack_trace );
          }

        protected:
          uint32_t error_code;
          string error_message;
          string stack_trace;
        };


        class InvalidArgumentException : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS
        {
        public:
          InvalidArgumentException() { }

          InvalidArgumentException( const string& error_message )
            : error_message( error_message )
          { }

          InvalidArgumentException( const char* what ) : ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS( what ) { }
          virtual ~InvalidArgumentException() throw() { ; }

          const string& get_error_message() const { return error_message; }
          void set_error_message( const string& error_message ) { this->error_message = error_message; }

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "error_message", 0, error_message );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "error_message", 0, error_message );
          }

          // yield::concurrency::ExceptionResponse
          virtual ::yield::concurrency::ExceptionResponse* clone() const
          {
            return new InvalidArgumentException( error_message );
          }

          virtual void throwStackClone() const
          {
            throw InvalidArgumentException( error_message );
          }

        protected:
          string error_message;
        };


        class MRCException : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS
        {
        public:
          MRCException()
            : error_code( 0 )
          { }

          MRCException
          (
            uint32_t error_code,
            const string& error_message,
            const string& stack_trace
          )
            : error_code( error_code ),
              error_message( error_message ),
              stack_trace( stack_trace )
          { }

          MRCException( const char* what ) : ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS( what ) { }
          virtual ~MRCException() throw() { ; }

          uint32_t get_error_code() const { return error_code; }
          const string& get_error_message() const { return error_message; }
          const string& get_stack_trace() const { return stack_trace; }
          void set_error_code( uint32_t error_code ) { this->error_code = error_code; }
          void set_error_message( const string& error_message ) { this->error_message = error_message; }
          void set_stack_trace( const string& stack_trace ) { this->stack_trace = stack_trace; }

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "error_code", 0, error_code );
            marshaller.write( "error_message", 0, error_message );
            marshaller.write( "stack_trace", 0, stack_trace );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            error_code = unmarshaller.read_uint32( "error_code", 0 );
            unmarshaller.read( "error_message", 0, error_message );
            unmarshaller.read( "stack_trace", 0, stack_trace );
          }

          // yield::concurrency::ExceptionResponse
          virtual ::yield::concurrency::ExceptionResponse* clone() const
          {
            return new MRCException( error_code, error_message, stack_trace );
          }

          virtual void throwStackClone() const
          {
            throw MRCException( error_code, error_message, stack_trace );
          }

        protected:
          uint32_t error_code;
          string error_message;
          string stack_trace;
        };


        class ProtocolException : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS
        {
        public:
          ProtocolException()
            : accept_stat( 0 ), error_code( 0 )
          { }

          ProtocolException
          (
            uint32_t accept_stat,
            uint32_t error_code,
            const string& stack_trace
          )
            : accept_stat( accept_stat ), error_code( error_code ), stack_trace( stack_trace )
          { }

          ProtocolException( const char* what ) : ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS( what ) { }
          virtual ~ProtocolException() throw() { ; }

          uint32_t get_accept_stat() const { return accept_stat; }
          uint32_t get_error_code() const { return error_code; }
          const string& get_stack_trace() const { return stack_trace; }
          void set_accept_stat( uint32_t accept_stat ) { this->accept_stat = accept_stat; }
          void set_error_code( uint32_t error_code ) { this->error_code = error_code; }
          void set_stack_trace( const string& stack_trace ) { this->stack_trace = stack_trace; }

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "accept_stat", 0, accept_stat );
            marshaller.write( "error_code", 0, error_code );
            marshaller.write( "stack_trace", 0, stack_trace );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            accept_stat = unmarshaller.read_uint32( "accept_stat", 0 );
            error_code = unmarshaller.read_uint32( "error_code", 0 );
            unmarshaller.read( "stack_trace", 0, stack_trace );
          }

          // yield::concurrency::ExceptionResponse
          virtual ::yield::concurrency::ExceptionResponse* clone() const
          {
            return new ProtocolException( accept_stat, error_code, stack_trace );
          }

          virtual void throwStackClone() const
          {
            throw ProtocolException( accept_stat, error_code, stack_trace );
          }

        protected:
          uint32_t accept_stat;
          uint32_t error_code;
          string stack_trace;
        };


        class RedirectException : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS
        {
        public:
          RedirectException()
            : port( 0 )
          { }

          RedirectException( const string& address, uint16_t port )
            : address( address ), port( port )
          { }

          RedirectException( const char* what ) : ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS( what ) { }
          virtual ~RedirectException() throw() { ; }

          const string& get_address() const { return address; }
          uint16_t get_port() const { return port; }
          void set_address( const string& address ) { this->address = address; }
          void set_port( uint16_t port ) { this->port = port; }

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& marshaller ) const
          {
            marshaller.write( "address", 0, address );
            marshaller.write( "port", 0, port );
          }

          void unmarshal( ::yidl::runtime::Unmarshaller& unmarshaller )
          {
            unmarshaller.read( "address", 0, address );
            port = unmarshaller.read_uint16( "port", 0 );
          }

          // yield::concurrency::ExceptionResponse
          virtual ::yield::concurrency::ExceptionResponse* clone() const
          {
            return new RedirectException( address, port );
          }

          virtual void throwStackClone() const
          {
            throw RedirectException( address, port );
          }

        protected:
          string address;
          uint16_t port;
        };


        class StaleETagException : public ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS
        {
        public:
          StaleETagException() { }
          StaleETagException( const char* what ) : ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EXCEPTION_RESPONSE_PARENT_CLASS( what ) { }
          virtual ~StaleETagException() throw() { ; }

          // yidl::runtime::MarshallableObject
          void marshal( ::yidl::runtime::Marshaller& ) const { }
          void unmarshal( ::yidl::runtime::Unmarshaller& ) { }

          // yield::concurrency::ExceptionResponse
          virtual ::yield::concurrency::ExceptionResponse* clone() const
          {
            return new StaleETagException();
          }

          virtual void throwStackClone() const
          {
            throw StaleETagException();
          }
        };
      };


      class MRCInterfaceEventFactory
        : public ::yield::concurrency::EventFactory,
          private MRCInterfaceEvents
      {
      public:
        // yield::concurrency::EventFactory
        virtual ::yield::concurrency::ExceptionResponse*
        createExceptionResponse
        (
          uint32_t type_id
        )
        {
          switch ( type_id )
          {
            case 2010031166: return new ConcurrentModificationException;
            case 2010031167: return new errnoException;
            case 2010031168: return new InvalidArgumentException;
            case 2010031169: return new MRCException;
            case 2010031170: return new ProtocolException;
            case 2010031171: return new RedirectException;
            case 2010031172: return new StaleETagException;
            default: return NULL;
          }
        }

        virtual ::yield::concurrency::ExceptionResponse*
        createExceptionResponse
        (
          const char* type_name
        )
        {
          if ( strcmp( type_name, "ConcurrentModificationException" ) == 0 ) return new ConcurrentModificationException;
          else if ( strcmp( type_name, "errnoException" ) == 0 ) return new errnoException;
          else if ( strcmp( type_name, "InvalidArgumentException" ) == 0 ) return new InvalidArgumentException;
          else if ( strcmp( type_name, "MRCException" ) == 0 ) return new MRCException;
          else if ( strcmp( type_name, "ProtocolException" ) == 0 ) return new ProtocolException;
          else if ( strcmp( type_name, "RedirectException" ) == 0 ) return new RedirectException;
          else if ( strcmp( type_name, "StaleETagException" ) == 0 ) return new StaleETagException;
          else return NULL;
        }

        virtual ::yield::concurrency::Request* createRequest( uint32_t type_id )
        {
          switch ( type_id )
          {
            case 2010031117: return new closeRequest;
            case 2010031118: return new fsetattrRequest;
            case 2010031119: return new ftruncateRequest;
            case 2010031120: return new getattrRequest;
            case 2010031121: return new getxattrRequest;
            case 2010031122: return new linkRequest;
            case 2010031123: return new listxattrRequest;
            case 2010031124: return new mkdirRequest;
            case 2010031125: return new openRequest;
            case 2010031126: return new readdirRequest;
            case 2010031127: return new readlinkRequest;
            case 2010031128: return new removexattrRequest;
            case 2010031129: return new renameRequest;
            case 2010031130: return new rmdirRequest;
            case 2010031131: return new setattrRequest;
            case 2010031132: return new setxattrRequest;
            case 2010031133: return new statvfsRequest;
            case 2010031134: return new symlinkRequest;
            case 2010031135: return new unlinkRequest;
            case 2010031146: return new xtreemfs_checkpointRequest;
            case 2010031147: return new xtreemfs_check_file_existsRequest;
            case 2010031148: return new xtreemfs_dump_databaseRequest;
            case 2010031149: return new xtreemfs_get_suitable_osdsRequest;
            case 2010031150: return new xtreemfs_internal_debugRequest;
            case 2010031151: return new xtreemfs_lsvolRequest;
            case 2010031152: return new xtreemfs_mkvolRequest;
            case 2010031153: return new xtreemfs_renew_capabilityRequest;
            case 2010031154: return new xtreemfs_replication_to_masterRequest;
            case 2010031155: return new xtreemfs_replica_addRequest;
            case 2010031156: return new xtreemfs_replica_listRequest;
            case 2010031157: return new xtreemfs_replica_removeRequest;
            case 2010031158: return new xtreemfs_restore_databaseRequest;
            case 2010031159: return new xtreemfs_restore_fileRequest;
            case 2010031160: return new xtreemfs_rmvolRequest;
            case 2010031161: return new xtreemfs_shutdownRequest;
            default: return NULL;
          }
        }

        virtual ::yield::concurrency::Request* createRequest( const char* type_name )
        {
          if ( strcmp( type_name, "closeRequest" ) == 0 ) return new closeRequest;
          else if ( strcmp( type_name, "fsetattrRequest" ) == 0 ) return new fsetattrRequest;
          else if ( strcmp( type_name, "ftruncateRequest" ) == 0 ) return new ftruncateRequest;
          else if ( strcmp( type_name, "getattrRequest" ) == 0 ) return new getattrRequest;
          else if ( strcmp( type_name, "getxattrRequest" ) == 0 ) return new getxattrRequest;
          else if ( strcmp( type_name, "linkRequest" ) == 0 ) return new linkRequest;
          else if ( strcmp( type_name, "listxattrRequest" ) == 0 ) return new listxattrRequest;
          else if ( strcmp( type_name, "mkdirRequest" ) == 0 ) return new mkdirRequest;
          else if ( strcmp( type_name, "openRequest" ) == 0 ) return new openRequest;
          else if ( strcmp( type_name, "readdirRequest" ) == 0 ) return new readdirRequest;
          else if ( strcmp( type_name, "readlinkRequest" ) == 0 ) return new readlinkRequest;
          else if ( strcmp( type_name, "removexattrRequest" ) == 0 ) return new removexattrRequest;
          else if ( strcmp( type_name, "renameRequest" ) == 0 ) return new renameRequest;
          else if ( strcmp( type_name, "rmdirRequest" ) == 0 ) return new rmdirRequest;
          else if ( strcmp( type_name, "setattrRequest" ) == 0 ) return new setattrRequest;
          else if ( strcmp( type_name, "setxattrRequest" ) == 0 ) return new setxattrRequest;
          else if ( strcmp( type_name, "statvfsRequest" ) == 0 ) return new statvfsRequest;
          else if ( strcmp( type_name, "symlinkRequest" ) == 0 ) return new symlinkRequest;
          else if ( strcmp( type_name, "unlinkRequest" ) == 0 ) return new unlinkRequest;
          else if ( strcmp( type_name, "xtreemfs_checkpointRequest" ) == 0 ) return new xtreemfs_checkpointRequest;
          else if ( strcmp( type_name, "xtreemfs_check_file_existsRequest" ) == 0 ) return new xtreemfs_check_file_existsRequest;
          else if ( strcmp( type_name, "xtreemfs_dump_databaseRequest" ) == 0 ) return new xtreemfs_dump_databaseRequest;
          else if ( strcmp( type_name, "xtreemfs_get_suitable_osdsRequest" ) == 0 ) return new xtreemfs_get_suitable_osdsRequest;
          else if ( strcmp( type_name, "xtreemfs_internal_debugRequest" ) == 0 ) return new xtreemfs_internal_debugRequest;
          else if ( strcmp( type_name, "xtreemfs_lsvolRequest" ) == 0 ) return new xtreemfs_lsvolRequest;
          else if ( strcmp( type_name, "xtreemfs_mkvolRequest" ) == 0 ) return new xtreemfs_mkvolRequest;
          else if ( strcmp( type_name, "xtreemfs_renew_capabilityRequest" ) == 0 ) return new xtreemfs_renew_capabilityRequest;
          else if ( strcmp( type_name, "xtreemfs_replication_to_masterRequest" ) == 0 ) return new xtreemfs_replication_to_masterRequest;
          else if ( strcmp( type_name, "xtreemfs_replica_addRequest" ) == 0 ) return new xtreemfs_replica_addRequest;
          else if ( strcmp( type_name, "xtreemfs_replica_listRequest" ) == 0 ) return new xtreemfs_replica_listRequest;
          else if ( strcmp( type_name, "xtreemfs_replica_removeRequest" ) == 0 ) return new xtreemfs_replica_removeRequest;
          else if ( strcmp( type_name, "xtreemfs_restore_databaseRequest" ) == 0 ) return new xtreemfs_restore_databaseRequest;
          else if ( strcmp( type_name, "xtreemfs_restore_fileRequest" ) == 0 ) return new xtreemfs_restore_fileRequest;
          else if ( strcmp( type_name, "xtreemfs_rmvolRequest" ) == 0 ) return new xtreemfs_rmvolRequest;
          else if ( strcmp( type_name, "xtreemfs_shutdownRequest" ) == 0 ) return new xtreemfs_shutdownRequest;
          else return NULL;
        }

        virtual ::yield::concurrency::Response* createResponse( uint32_t type_id )
        {
          switch ( type_id )
          {
            case 2010031117: return new closeResponse;
            case 2010031118: return new fsetattrResponse;
            case 2010031119: return new ftruncateResponse;
            case 2010031120: return new getattrResponse;
            case 2010031121: return new getxattrResponse;
            case 2010031122: return new linkResponse;
            case 2010031123: return new listxattrResponse;
            case 2010031124: return new mkdirResponse;
            case 2010031125: return new openResponse;
            case 2010031126: return new readdirResponse;
            case 2010031127: return new readlinkResponse;
            case 2010031128: return new removexattrResponse;
            case 2010031129: return new renameResponse;
            case 2010031130: return new rmdirResponse;
            case 2010031131: return new setattrResponse;
            case 2010031132: return new setxattrResponse;
            case 2010031133: return new statvfsResponse;
            case 2010031134: return new symlinkResponse;
            case 2010031135: return new unlinkResponse;
            case 2010031146: return new xtreemfs_checkpointResponse;
            case 2010031147: return new xtreemfs_check_file_existsResponse;
            case 2010031148: return new xtreemfs_dump_databaseResponse;
            case 2010031149: return new xtreemfs_get_suitable_osdsResponse;
            case 2010031150: return new xtreemfs_internal_debugResponse;
            case 2010031151: return new xtreemfs_lsvolResponse;
            case 2010031152: return new xtreemfs_mkvolResponse;
            case 2010031153: return new xtreemfs_renew_capabilityResponse;
            case 2010031154: return new xtreemfs_replication_to_masterResponse;
            case 2010031155: return new xtreemfs_replica_addResponse;
            case 2010031156: return new xtreemfs_replica_listResponse;
            case 2010031157: return new xtreemfs_replica_removeResponse;
            case 2010031158: return new xtreemfs_restore_databaseResponse;
            case 2010031159: return new xtreemfs_restore_fileResponse;
            case 2010031160: return new xtreemfs_rmvolResponse;
            case 2010031161: return new xtreemfs_shutdownResponse;
            default: return NULL;
          }
        }

        virtual ::yield::concurrency::Response* createResponse( const char* type_name )
        {
          if ( strcmp( type_name, "closeResponse" ) == 0 ) return new closeResponse;
          else if ( strcmp( type_name, "fsetattrResponse" ) == 0 ) return new fsetattrResponse;
          else if ( strcmp( type_name, "ftruncateResponse" ) == 0 ) return new ftruncateResponse;
          else if ( strcmp( type_name, "getattrResponse" ) == 0 ) return new getattrResponse;
          else if ( strcmp( type_name, "getxattrResponse" ) == 0 ) return new getxattrResponse;
          else if ( strcmp( type_name, "linkResponse" ) == 0 ) return new linkResponse;
          else if ( strcmp( type_name, "listxattrResponse" ) == 0 ) return new listxattrResponse;
          else if ( strcmp( type_name, "mkdirResponse" ) == 0 ) return new mkdirResponse;
          else if ( strcmp( type_name, "openResponse" ) == 0 ) return new openResponse;
          else if ( strcmp( type_name, "readdirResponse" ) == 0 ) return new readdirResponse;
          else if ( strcmp( type_name, "readlinkResponse" ) == 0 ) return new readlinkResponse;
          else if ( strcmp( type_name, "removexattrResponse" ) == 0 ) return new removexattrResponse;
          else if ( strcmp( type_name, "renameResponse" ) == 0 ) return new renameResponse;
          else if ( strcmp( type_name, "rmdirResponse" ) == 0 ) return new rmdirResponse;
          else if ( strcmp( type_name, "setattrResponse" ) == 0 ) return new setattrResponse;
          else if ( strcmp( type_name, "setxattrResponse" ) == 0 ) return new setxattrResponse;
          else if ( strcmp( type_name, "statvfsResponse" ) == 0 ) return new statvfsResponse;
          else if ( strcmp( type_name, "symlinkResponse" ) == 0 ) return new symlinkResponse;
          else if ( strcmp( type_name, "unlinkResponse" ) == 0 ) return new unlinkResponse;
          else if ( strcmp( type_name, "xtreemfs_checkpointResponse" ) == 0 ) return new xtreemfs_checkpointResponse;
          else if ( strcmp( type_name, "xtreemfs_check_file_existsResponse" ) == 0 ) return new xtreemfs_check_file_existsResponse;
          else if ( strcmp( type_name, "xtreemfs_dump_databaseResponse" ) == 0 ) return new xtreemfs_dump_databaseResponse;
          else if ( strcmp( type_name, "xtreemfs_get_suitable_osdsResponse" ) == 0 ) return new xtreemfs_get_suitable_osdsResponse;
          else if ( strcmp( type_name, "xtreemfs_internal_debugResponse" ) == 0 ) return new xtreemfs_internal_debugResponse;
          else if ( strcmp( type_name, "xtreemfs_lsvolResponse" ) == 0 ) return new xtreemfs_lsvolResponse;
          else if ( strcmp( type_name, "xtreemfs_mkvolResponse" ) == 0 ) return new xtreemfs_mkvolResponse;
          else if ( strcmp( type_name, "xtreemfs_renew_capabilityResponse" ) == 0 ) return new xtreemfs_renew_capabilityResponse;
          else if ( strcmp( type_name, "xtreemfs_replication_to_masterResponse" ) == 0 ) return new xtreemfs_replication_to_masterResponse;
          else if ( strcmp( type_name, "xtreemfs_replica_addResponse" ) == 0 ) return new xtreemfs_replica_addResponse;
          else if ( strcmp( type_name, "xtreemfs_replica_listResponse" ) == 0 ) return new xtreemfs_replica_listResponse;
          else if ( strcmp( type_name, "xtreemfs_replica_removeResponse" ) == 0 ) return new xtreemfs_replica_removeResponse;
          else if ( strcmp( type_name, "xtreemfs_restore_databaseResponse" ) == 0 ) return new xtreemfs_restore_databaseResponse;
          else if ( strcmp( type_name, "xtreemfs_restore_fileResponse" ) == 0 ) return new xtreemfs_restore_fileResponse;
          else if ( strcmp( type_name, "xtreemfs_rmvolResponse" ) == 0 ) return new xtreemfs_rmvolResponse;
          else if ( strcmp( type_name, "xtreemfs_shutdownResponse" ) == 0 ) return new xtreemfs_shutdownResponse;
          else return NULL;
        }

        virtual ::yield::concurrency::ExceptionResponse*
        isExceptionResponse
        (
          ::yidl::runtime::MarshallableObject& marshallable_object
        ) const
        {
          switch ( marshallable_object.get_type_id() )
          {
            case 2010031166: return static_cast<ConcurrentModificationException*>( &marshallable_object );
            case 2010031167: return static_cast<errnoException*>( &marshallable_object );
            case 2010031168: return static_cast<InvalidArgumentException*>( &marshallable_object );
            case 2010031169: return static_cast<MRCException*>( &marshallable_object );
            case 2010031170: return static_cast<ProtocolException*>( &marshallable_object );
            case 2010031171: return static_cast<RedirectException*>( &marshallable_object );
            case 2010031172: return static_cast<StaleETagException*>( &marshallable_object );
            default: return NULL;
          }
        }

        virtual ::yield::concurrency::Request*
        isRequest
        (
          ::yidl::runtime::MarshallableObject& marshallable_object
        ) const
        {
          switch ( marshallable_object.get_type_id() )
          {
            case 2010031117: return static_cast<closeRequest*>( &marshallable_object );
            case 2010031118: return static_cast<fsetattrRequest*>( &marshallable_object );
            case 2010031119: return static_cast<ftruncateRequest*>( &marshallable_object );
            case 2010031120: return static_cast<getattrRequest*>( &marshallable_object );
            case 2010031121: return static_cast<getxattrRequest*>( &marshallable_object );
            case 2010031122: return static_cast<linkRequest*>( &marshallable_object );
            case 2010031123: return static_cast<listxattrRequest*>( &marshallable_object );
            case 2010031124: return static_cast<mkdirRequest*>( &marshallable_object );
            case 2010031125: return static_cast<openRequest*>( &marshallable_object );
            case 2010031126: return static_cast<readdirRequest*>( &marshallable_object );
            case 2010031127: return static_cast<readlinkRequest*>( &marshallable_object );
            case 2010031128: return static_cast<removexattrRequest*>( &marshallable_object );
            case 2010031129: return static_cast<renameRequest*>( &marshallable_object );
            case 2010031130: return static_cast<rmdirRequest*>( &marshallable_object );
            case 2010031131: return static_cast<setattrRequest*>( &marshallable_object );
            case 2010031132: return static_cast<setxattrRequest*>( &marshallable_object );
            case 2010031133: return static_cast<statvfsRequest*>( &marshallable_object );
            case 2010031134: return static_cast<symlinkRequest*>( &marshallable_object );
            case 2010031135: return static_cast<unlinkRequest*>( &marshallable_object );
            case 2010031146: return static_cast<xtreemfs_checkpointRequest*>( &marshallable_object );
            case 2010031147: return static_cast<xtreemfs_check_file_existsRequest*>( &marshallable_object );
            case 2010031148: return static_cast<xtreemfs_dump_databaseRequest*>( &marshallable_object );
            case 2010031149: return static_cast<xtreemfs_get_suitable_osdsRequest*>( &marshallable_object );
            case 2010031150: return static_cast<xtreemfs_internal_debugRequest*>( &marshallable_object );
            case 2010031151: return static_cast<xtreemfs_lsvolRequest*>( &marshallable_object );
            case 2010031152: return static_cast<xtreemfs_mkvolRequest*>( &marshallable_object );
            case 2010031153: return static_cast<xtreemfs_renew_capabilityRequest*>( &marshallable_object );
            case 2010031154: return static_cast<xtreemfs_replication_to_masterRequest*>( &marshallable_object );
            case 2010031155: return static_cast<xtreemfs_replica_addRequest*>( &marshallable_object );
            case 2010031156: return static_cast<xtreemfs_replica_listRequest*>( &marshallable_object );
            case 2010031157: return static_cast<xtreemfs_replica_removeRequest*>( &marshallable_object );
            case 2010031158: return static_cast<xtreemfs_restore_databaseRequest*>( &marshallable_object );
            case 2010031159: return static_cast<xtreemfs_restore_fileRequest*>( &marshallable_object );
            case 2010031160: return static_cast<xtreemfs_rmvolRequest*>( &marshallable_object );
            case 2010031161: return static_cast<xtreemfs_shutdownRequest*>( &marshallable_object );
            default: return NULL;
          }
        }

        virtual ::yield::concurrency::Response*
        isResponse
        (
          ::yidl::runtime::MarshallableObject& marshallable_object
        ) const
        {
          switch ( marshallable_object.get_type_id() )
          {
                case 2010031117: return static_cast<closeResponse*>( &marshallable_object );
            case 2010031118: return static_cast<fsetattrResponse*>( &marshallable_object );
            case 2010031119: return static_cast<ftruncateResponse*>( &marshallable_object );
            case 2010031120: return static_cast<getattrResponse*>( &marshallable_object );
            case 2010031121: return static_cast<getxattrResponse*>( &marshallable_object );
            case 2010031122: return static_cast<linkResponse*>( &marshallable_object );
            case 2010031123: return static_cast<listxattrResponse*>( &marshallable_object );
            case 2010031124: return static_cast<mkdirResponse*>( &marshallable_object );
            case 2010031125: return static_cast<openResponse*>( &marshallable_object );
            case 2010031126: return static_cast<readdirResponse*>( &marshallable_object );
            case 2010031127: return static_cast<readlinkResponse*>( &marshallable_object );
            case 2010031128: return static_cast<removexattrResponse*>( &marshallable_object );
            case 2010031129: return static_cast<renameResponse*>( &marshallable_object );
            case 2010031130: return static_cast<rmdirResponse*>( &marshallable_object );
            case 2010031131: return static_cast<setattrResponse*>( &marshallable_object );
            case 2010031132: return static_cast<setxattrResponse*>( &marshallable_object );
            case 2010031133: return static_cast<statvfsResponse*>( &marshallable_object );
            case 2010031134: return static_cast<symlinkResponse*>( &marshallable_object );
            case 2010031135: return static_cast<unlinkResponse*>( &marshallable_object );
            case 2010031146: return static_cast<xtreemfs_checkpointResponse*>( &marshallable_object );
            case 2010031147: return static_cast<xtreemfs_check_file_existsResponse*>( &marshallable_object );
            case 2010031148: return static_cast<xtreemfs_dump_databaseResponse*>( &marshallable_object );
            case 2010031149: return static_cast<xtreemfs_get_suitable_osdsResponse*>( &marshallable_object );
            case 2010031150: return static_cast<xtreemfs_internal_debugResponse*>( &marshallable_object );
            case 2010031151: return static_cast<xtreemfs_lsvolResponse*>( &marshallable_object );
            case 2010031152: return static_cast<xtreemfs_mkvolResponse*>( &marshallable_object );
            case 2010031153: return static_cast<xtreemfs_renew_capabilityResponse*>( &marshallable_object );
            case 2010031154: return static_cast<xtreemfs_replication_to_masterResponse*>( &marshallable_object );
            case 2010031155: return static_cast<xtreemfs_replica_addResponse*>( &marshallable_object );
            case 2010031156: return static_cast<xtreemfs_replica_listResponse*>( &marshallable_object );
            case 2010031157: return static_cast<xtreemfs_replica_removeResponse*>( &marshallable_object );
            case 2010031158: return static_cast<xtreemfs_restore_databaseResponse*>( &marshallable_object );
            case 2010031159: return static_cast<xtreemfs_restore_fileResponse*>( &marshallable_object );
            case 2010031160: return static_cast<xtreemfs_rmvolResponse*>( &marshallable_object );
            case 2010031161: return static_cast<xtreemfs_shutdownResponse*>( &marshallable_object );
            default: return NULL;
          }
        }

      };


      class MRCInterfaceEventHandler
        : public ::yield::concurrency::EventHandler,
          protected MRCInterfaceEvents
      {
      public:
        MRCInterfaceEventHandler()  // Subclasses must implement
          : _interface( NULL ) // all relevant handle*Request methods
        { }

        // Steals interface_ to allow for *new
        MRCInterfaceEventHandler( MRCInterface& _interface )
          : _interface( &_interface )
        { }

        virtual ~MRCInterfaceEventHandler()
        {
          delete _interface;
        }

        // yield::concurrency::EventHandler
        virtual const char* get_event_handler_name() const
        {
          return "MRCInterface";
        }

        virtual void handleEvent( ::yield::concurrency::Event& event )
        {
          // Switch on the event types that this interface handles, unwrap the corresponding requests and delegate to _interface
          switch ( event.get_type_id() )
          {
            case 2010031117UL: handlecloseRequest( static_cast<closeRequest&>( event ) ); return;
            case 2010031118UL: handlefsetattrRequest( static_cast<fsetattrRequest&>( event ) ); return;
            case 2010031119UL: handleftruncateRequest( static_cast<ftruncateRequest&>( event ) ); return;
            case 2010031120UL: handlegetattrRequest( static_cast<getattrRequest&>( event ) ); return;
            case 2010031121UL: handlegetxattrRequest( static_cast<getxattrRequest&>( event ) ); return;
            case 2010031122UL: handlelinkRequest( static_cast<linkRequest&>( event ) ); return;
            case 2010031123UL: handlelistxattrRequest( static_cast<listxattrRequest&>( event ) ); return;
            case 2010031124UL: handlemkdirRequest( static_cast<mkdirRequest&>( event ) ); return;
            case 2010031125UL: handleopenRequest( static_cast<openRequest&>( event ) ); return;
            case 2010031126UL: handlereaddirRequest( static_cast<readdirRequest&>( event ) ); return;
            case 2010031127UL: handlereadlinkRequest( static_cast<readlinkRequest&>( event ) ); return;
            case 2010031128UL: handleremovexattrRequest( static_cast<removexattrRequest&>( event ) ); return;
            case 2010031129UL: handlerenameRequest( static_cast<renameRequest&>( event ) ); return;
            case 2010031130UL: handlermdirRequest( static_cast<rmdirRequest&>( event ) ); return;
            case 2010031131UL: handlesetattrRequest( static_cast<setattrRequest&>( event ) ); return;
            case 2010031132UL: handlesetxattrRequest( static_cast<setxattrRequest&>( event ) ); return;
            case 2010031133UL: handlestatvfsRequest( static_cast<statvfsRequest&>( event ) ); return;
            case 2010031134UL: handlesymlinkRequest( static_cast<symlinkRequest&>( event ) ); return;
            case 2010031135UL: handleunlinkRequest( static_cast<unlinkRequest&>( event ) ); return;
            case 2010031146UL: handlextreemfs_checkpointRequest( static_cast<xtreemfs_checkpointRequest&>( event ) ); return;
            case 2010031147UL: handlextreemfs_check_file_existsRequest( static_cast<xtreemfs_check_file_existsRequest&>( event ) ); return;
            case 2010031148UL: handlextreemfs_dump_databaseRequest( static_cast<xtreemfs_dump_databaseRequest&>( event ) ); return;
            case 2010031149UL: handlextreemfs_get_suitable_osdsRequest( static_cast<xtreemfs_get_suitable_osdsRequest&>( event ) ); return;
            case 2010031150UL: handlextreemfs_internal_debugRequest( static_cast<xtreemfs_internal_debugRequest&>( event ) ); return;
            case 2010031151UL: handlextreemfs_lsvolRequest( static_cast<xtreemfs_lsvolRequest&>( event ) ); return;
            case 2010031152UL: handlextreemfs_mkvolRequest( static_cast<xtreemfs_mkvolRequest&>( event ) ); return;
            case 2010031153UL: handlextreemfs_renew_capabilityRequest( static_cast<xtreemfs_renew_capabilityRequest&>( event ) ); return;
            case 2010031154UL: handlextreemfs_replication_to_masterRequest( static_cast<xtreemfs_replication_to_masterRequest&>( event ) ); return;
            case 2010031155UL: handlextreemfs_replica_addRequest( static_cast<xtreemfs_replica_addRequest&>( event ) ); return;
            case 2010031156UL: handlextreemfs_replica_listRequest( static_cast<xtreemfs_replica_listRequest&>( event ) ); return;
            case 2010031157UL: handlextreemfs_replica_removeRequest( static_cast<xtreemfs_replica_removeRequest&>( event ) ); return;
            case 2010031158UL: handlextreemfs_restore_databaseRequest( static_cast<xtreemfs_restore_databaseRequest&>( event ) ); return;
            case 2010031159UL: handlextreemfs_restore_fileRequest( static_cast<xtreemfs_restore_fileRequest&>( event ) ); return;
            case 2010031160UL: handlextreemfs_rmvolRequest( static_cast<xtreemfs_rmvolRequest&>( event ) ); return;
            case 2010031161UL: handlextreemfs_shutdownRequest( static_cast<xtreemfs_shutdownRequest&>( event ) ); return;
            default: ::yield::concurrency::Event::dec_ref( event ); return;
          }
        }

      protected:
        virtual void handlecloseRequest( closeRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->close
              (
                __request.get_client_vivaldi_coordinates(),
                __request.get_write_xcap()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          closeRequest::dec_ref( __request );
        }

        virtual void handlefsetattrRequest( fsetattrRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->fsetattr
              (
                __request.get_stbuf(),
                __request.get_to_set(),
                __request.get_xcap()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          fsetattrRequest::dec_ref( __request );
        }

        virtual void handleftruncateRequest( ftruncateRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::XCap truncate_xcap;

              _interface->ftruncate( __request.get_write_xcap(), truncate_xcap );

              __request.respond( truncate_xcap );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          ftruncateRequest::dec_ref( __request );
        }

        virtual void handlegetattrRequest( getattrRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::StatSet stbuf;

              _interface->getattr
              (
                __request.get_volume_name(),
                __request.get_path(),
                __request.get_known_etag(),
                stbuf
              );

              __request.respond( stbuf );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          getattrRequest::dec_ref( __request );
        }

        virtual void handlegetxattrRequest( getxattrRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              string value;

              _interface->getxattr
              (
                __request.get_volume_name(),
                __request.get_path(),
                __request.get_name(),
                value
              );

              __request.respond( value );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          getxattrRequest::dec_ref( __request );
        }

        virtual void handlelinkRequest( linkRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->link
              (
                __request.get_volume_name(),
                __request.get_target_path(),
                __request.get_link_path()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          linkRequest::dec_ref( __request );
        }

        virtual void handlelistxattrRequest( listxattrRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::StringSet names;

              _interface->listxattr
              (
                __request.get_volume_name(),
                __request.get_path(),
                names
              );

              __request.respond( names );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          listxattrRequest::dec_ref( __request );
        }

        virtual void handlemkdirRequest( mkdirRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->mkdir
              (
                __request.get_volume_name(),
                __request.get_path(),
                __request.get_mode()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          mkdirRequest::dec_ref( __request );
        }

        virtual void handleopenRequest( openRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::FileCredentials file_credentials;

              _interface->open
              (
                __request.get_volume_name(),
                __request.get_path(),
                __request.get_flags(),
                __request.get_mode(),
                __request.get_attributes(),
                __request.get_client_vivaldi_coordinates(),
                file_credentials
              );

              __request.respond( file_credentials );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          openRequest::dec_ref( __request );
        }

        virtual void handlereaddirRequest( readdirRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::DirectoryEntrySet directory_entries;

              _interface->readdir
              (
                __request.get_volume_name(),
                __request.get_path(),
                __request.get_known_etag(),
                __request.get_limit_directory_entries_count(),
                __request.get_names_only(),
                __request.get_seen_directory_entries_count(),
                directory_entries
              );

              __request.respond( directory_entries );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          readdirRequest::dec_ref( __request );
        }

        virtual void handlereadlinkRequest( readlinkRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              string link_target_path;

              _interface->readlink
              (
                __request.get_volume_name(),
                __request.get_path(),
                link_target_path
              );

              __request.respond( link_target_path );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          readlinkRequest::dec_ref( __request );
        }

        virtual void handleremovexattrRequest( removexattrRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->removexattr
              (
                __request.get_volume_name(),
                __request.get_path(),
                __request.get_name()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          removexattrRequest::dec_ref( __request );
        }

        virtual void handlerenameRequest( renameRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::FileCredentialsSet file_credentials;

              _interface->rename
              (
                __request.get_volume_name(),
                __request.get_source_path(),
                __request.get_target_path(),
                file_credentials
              );

              __request.respond( file_credentials );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          renameRequest::dec_ref( __request );
        }

        virtual void handlermdirRequest( rmdirRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->rmdir( __request.get_volume_name(), __request.get_path() );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          rmdirRequest::dec_ref( __request );
        }

        virtual void handlesetattrRequest( setattrRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->setattr
              (
                __request.get_volume_name(),
                __request.get_path(),
                __request.get_stbuf(),
                __request.get_to_set()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          setattrRequest::dec_ref( __request );
        }

        virtual void handlesetxattrRequest( setxattrRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->setxattr
              (
                __request.get_volume_name(),
                __request.get_path(),
                __request.get_name(),
                __request.get_value(),
                __request.get_flags()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          setxattrRequest::dec_ref( __request );
        }

        virtual void handlestatvfsRequest( statvfsRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::StatVFSSet stbuf;

              _interface->statvfs
              (
                __request.get_volume_name(),
                __request.get_known_etag(),
                stbuf
              );

              __request.respond( stbuf );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          statvfsRequest::dec_ref( __request );
        }

        virtual void handlesymlinkRequest( symlinkRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->symlink
              (
                __request.get_volume_name(),
                __request.get_target_path(),
                __request.get_link_path()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          symlinkRequest::dec_ref( __request );
        }

        virtual void handleunlinkRequest( unlinkRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::FileCredentialsSet file_credentials;

              _interface->unlink
              (
                __request.get_volume_name(),
                __request.get_path(),
                file_credentials
              );

              __request.respond( file_credentials );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          unlinkRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_checkpointRequest( xtreemfs_checkpointRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->xtreemfs_checkpoint();
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_checkpointRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_check_file_existsRequest( xtreemfs_check_file_existsRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              string bitmap;

              _interface->xtreemfs_check_file_exists
              (
                __request.get_volume_id(),
                __request.get_file_ids(),
                __request.get_osd_uuid(),
                bitmap
              );

              __request.respond( bitmap );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_check_file_existsRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_dump_databaseRequest( xtreemfs_dump_databaseRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->xtreemfs_dump_database( __request.get_dump_file() );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_dump_databaseRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_get_suitable_osdsRequest( xtreemfs_get_suitable_osdsRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::StringSet osd_uuids;

              _interface->xtreemfs_get_suitable_osds
              (
                __request.get_file_id(),
                __request.get_num_osds(),
                osd_uuids
              );

              __request.respond( osd_uuids );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_get_suitable_osdsRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_internal_debugRequest( xtreemfs_internal_debugRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              string result;

              _interface->xtreemfs_internal_debug( __request.get_operation(), result );

              __request.respond( result );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_internal_debugRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_lsvolRequest( xtreemfs_lsvolRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::StatVFSSet volumes;

              _interface->xtreemfs_lsvol( volumes );

              __request.respond( volumes );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_lsvolRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_mkvolRequest( xtreemfs_mkvolRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->xtreemfs_mkvol( __request.get_volume() );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_mkvolRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_renew_capabilityRequest( xtreemfs_renew_capabilityRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::XCap renewed_xcap;

              _interface->xtreemfs_renew_capability
              (
                __request.get_old_xcap(),
                renewed_xcap
              );

              __request.respond( renewed_xcap );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_renew_capabilityRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_replication_to_masterRequest( xtreemfs_replication_to_masterRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->xtreemfs_replication_to_master();
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_replication_to_masterRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_replica_addRequest( xtreemfs_replica_addRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->xtreemfs_replica_add
              (
                __request.get_file_id(),
                __request.get_new_replica()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_replica_addRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_replica_listRequest( xtreemfs_replica_listRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::ReplicaSet replicas;

              _interface->xtreemfs_replica_list( __request.get_file_id(), replicas );

              __request.respond( replicas );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_replica_listRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_replica_removeRequest( xtreemfs_replica_removeRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              org::xtreemfs::interfaces::XCap delete_xcap;

              _interface->xtreemfs_replica_remove
              (
                __request.get_file_id(),
                __request.get_osd_uuid(),
                delete_xcap
              );

              __request.respond( delete_xcap );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_replica_removeRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_restore_databaseRequest( xtreemfs_restore_databaseRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->xtreemfs_restore_database( __request.get_dump_file() );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_restore_databaseRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_restore_fileRequest( xtreemfs_restore_fileRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->xtreemfs_restore_file
              (
                __request.get_file_path(),
                __request.get_file_id(),
                __request.get_file_size(),
                __request.get_osd_uuid(),
                __request.get_stripe_size()
              );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_restore_fileRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_rmvolRequest( xtreemfs_rmvolRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->xtreemfs_rmvol( __request.get_volume_name() );
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_rmvolRequest::dec_ref( __request );
        }

        virtual void handlextreemfs_shutdownRequest( xtreemfs_shutdownRequest& __request )
        {
          if ( _interface != NULL )
          {
            try
            {
              _interface->xtreemfs_shutdown();
            }
            catch( ::yield::concurrency::ExceptionResponse* exception_response )
            {
              __request.respond( *exception_response );
            }
            catch ( ::yield::concurrency::ExceptionResponse& exception_response )
            {
              __request.respond( *exception_response.clone() );
            }
            catch ( ::yield::platform::Exception& exception )
            {
              __request.respond( *( new ::yield::concurrency::ExceptionResponse( exception ) ) );
            }
          }

          xtreemfs_shutdownRequest::dec_ref( __request );
        }

      private:
        MRCInterface* _interface;
      };

      #define ORG_XTREEMFS_INTERFACES_MRCINTERFACE_EVENT_HANDLER_PROTOTYPES \
      virtual void handlecloseRequest( closeRequest& __request );\
      virtual void handlefsetattrRequest( fsetattrRequest& __request );\
      virtual void handleftruncateRequest( ftruncateRequest& __request );\
      virtual void handlegetattrRequest( getattrRequest& __request );\
      virtual void handlegetxattrRequest( getxattrRequest& __request );\
      virtual void handlelinkRequest( linkRequest& __request );\
      virtual void handlelistxattrRequest( listxattrRequest& __request );\
      virtual void handlemkdirRequest( mkdirRequest& __request );\
      virtual void handleopenRequest( openRequest& __request );\
      virtual void handlereaddirRequest( readdirRequest& __request );\
      virtual void handlereadlinkRequest( readlinkRequest& __request );\
      virtual void handleremovexattrRequest( removexattrRequest& __request );\
      virtual void handlerenameRequest( renameRequest& __request );\
      virtual void handlermdirRequest( rmdirRequest& __request );\
      virtual void handlesetattrRequest( setattrRequest& __request );\
      virtual void handlesetxattrRequest( setxattrRequest& __request );\
      virtual void handlestatvfsRequest( statvfsRequest& __request );\
      virtual void handlesymlinkRequest( symlinkRequest& __request );\
      virtual void handleunlinkRequest( unlinkRequest& __request );\
      virtual void handlextreemfs_checkpointRequest( xtreemfs_checkpointRequest& __request );\
      virtual void handlextreemfs_check_file_existsRequest( xtreemfs_check_file_existsRequest& __request );\
      virtual void handlextreemfs_dump_databaseRequest( xtreemfs_dump_databaseRequest& __request );\
      virtual void handlextreemfs_get_suitable_osdsRequest( xtreemfs_get_suitable_osdsRequest& __request );\
      virtual void handlextreemfs_internal_debugRequest( xtreemfs_internal_debugRequest& __request );\
      virtual void handlextreemfs_lsvolRequest( xtreemfs_lsvolRequest& __request );\
      virtual void handlextreemfs_mkvolRequest( xtreemfs_mkvolRequest& __request );\
      virtual void handlextreemfs_renew_capabilityRequest( xtreemfs_renew_capabilityRequest& __request );\
      virtual void handlextreemfs_replication_to_masterRequest( xtreemfs_replication_to_masterRequest& __request );\
      virtual void handlextreemfs_replica_addRequest( xtreemfs_replica_addRequest& __request );\
      virtual void handlextreemfs_replica_listRequest( xtreemfs_replica_listRequest& __request );\
      virtual void handlextreemfs_replica_removeRequest( xtreemfs_replica_removeRequest& __request );\
      virtual void handlextreemfs_restore_databaseRequest( xtreemfs_restore_databaseRequest& __request );\
      virtual void handlextreemfs_restore_fileRequest( xtreemfs_restore_fileRequest& __request );\
      virtual void handlextreemfs_rmvolRequest( xtreemfs_rmvolRequest& __request );\
      virtual void handlextreemfs_shutdownRequest( xtreemfs_shutdownRequest& __request );


      class MRCInterfaceEventSender : public MRCInterface, private MRCInterfaceEvents
      {
      public:
        MRCInterfaceEventSender() // Used when the event_target is a subclass
          : __event_target( NULL )
        { }

        MRCInterfaceEventSender( ::yield::concurrency::EventTarget& event_target )
          : __event_target( &event_target )
        { }


        virtual void
        close
        (
          const org::xtreemfs::interfaces::VivaldiCoordinates& client_vivaldi_coordinates,
          const org::xtreemfs::interfaces::XCap& write_xcap
        )
        {
          closeRequest* __request = new closeRequest( client_vivaldi_coordinates, write_xcap );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<closeResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<closeResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<closeResponse> __response = __response_queue->dequeue();
        }

        virtual void
        fsetattr
        (
          const org::xtreemfs::interfaces::Stat& stbuf,
          uint32_t to_set,
          const org::xtreemfs::interfaces::XCap& xcap
        )
        {
          fsetattrRequest* __request = new fsetattrRequest( stbuf, to_set, xcap );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<fsetattrResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<fsetattrResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<fsetattrResponse> __response = __response_queue->dequeue();
        }

        virtual void
        ftruncate
        (
          const org::xtreemfs::interfaces::XCap& write_xcap,
          org::xtreemfs::interfaces::XCap& truncate_xcap
        )
        {
          ftruncateRequest* __request = new ftruncateRequest( write_xcap );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<ftruncateResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<ftruncateResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<ftruncateResponse> __response = __response_queue->dequeue();
          truncate_xcap = __response->get_truncate_xcap();
        }

        virtual void
        getattr
        (
          const string& volume_name,
          const string& path,
          uint64_t known_etag,
          org::xtreemfs::interfaces::StatSet& stbuf
        )
        {
          getattrRequest* __request = new getattrRequest( volume_name, path, known_etag );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<getattrResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<getattrResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<getattrResponse> __response = __response_queue->dequeue();
          stbuf = __response->get_stbuf();
        }

        virtual void
        getxattr
        (
          const string& volume_name,
          const string& path,
          const string& name,
          string& value
        )
        {
          getxattrRequest* __request = new getxattrRequest( volume_name, path, name );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<getxattrResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<getxattrResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<getxattrResponse> __response = __response_queue->dequeue();
          value = __response->get_value();
        }

        virtual void
        link
        (
          const string& volume_name,
          const string& target_path,
          const string& link_path
        )
        {
          linkRequest* __request = new linkRequest( volume_name, target_path, link_path );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<linkResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<linkResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<linkResponse> __response = __response_queue->dequeue();
        }

        virtual void
        listxattr
        (
          const string& volume_name,
          const string& path,
          org::xtreemfs::interfaces::StringSet& names
        )
        {
          listxattrRequest* __request = new listxattrRequest( volume_name, path );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<listxattrResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<listxattrResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<listxattrResponse> __response = __response_queue->dequeue();
          names = __response->get_names();
        }

        virtual void
        mkdir
        (
          const string& volume_name,
          const string& path,
          uint32_t mode
        )
        {
          mkdirRequest* __request = new mkdirRequest( volume_name, path, mode );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<mkdirResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<mkdirResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<mkdirResponse> __response = __response_queue->dequeue();
        }

        virtual void
        open
        (
          const string& volume_name,
          const string& path,
          uint32_t flags,
          uint32_t mode,
          uint32_t attributes,
          const org::xtreemfs::interfaces::VivaldiCoordinates& client_vivaldi_coordinates,
          org::xtreemfs::interfaces::FileCredentials& file_credentials
        )
        {
          openRequest* __request = new openRequest( volume_name, path, flags, mode, attributes, client_vivaldi_coordinates );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<openResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<openResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<openResponse> __response = __response_queue->dequeue();
          file_credentials = __response->get_file_credentials();
        }

        virtual void
        readdir
        (
          const string& volume_name,
          const string& path,
          uint64_t known_etag,
          uint16_t limit_directory_entries_count,
          bool names_only,
          uint64_t seen_directory_entries_count,
          org::xtreemfs::interfaces::DirectoryEntrySet& directory_entries
        )
        {
          readdirRequest* __request = new readdirRequest( volume_name, path, known_etag, limit_directory_entries_count, names_only, seen_directory_entries_count );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<readdirResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<readdirResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<readdirResponse> __response = __response_queue->dequeue();
          directory_entries = __response->get_directory_entries();
        }

        virtual void
        readlink
        (
          const string& volume_name,
          const string& path,
          string& link_target_path
        )
        {
          readlinkRequest* __request = new readlinkRequest( volume_name, path );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<readlinkResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<readlinkResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<readlinkResponse> __response = __response_queue->dequeue();
          link_target_path = __response->get_link_target_path();
        }

        virtual void
        removexattr
        (
          const string& volume_name,
          const string& path,
          const string& name
        )
        {
          removexattrRequest* __request = new removexattrRequest( volume_name, path, name );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<removexattrResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<removexattrResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<removexattrResponse> __response = __response_queue->dequeue();
        }

        virtual void
        rename
        (
          const string& volume_name,
          const string& source_path,
          const string& target_path,
          org::xtreemfs::interfaces::FileCredentialsSet& file_credentials
        )
        {
          renameRequest* __request = new renameRequest( volume_name, source_path, target_path );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<renameResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<renameResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<renameResponse> __response = __response_queue->dequeue();
          file_credentials = __response->get_file_credentials();
        }

        virtual void rmdir( const string& volume_name, const string& path )
        {
          rmdirRequest* __request = new rmdirRequest( volume_name, path );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<rmdirResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<rmdirResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<rmdirResponse> __response = __response_queue->dequeue();
        }

        virtual void
        setattr
        (
          const string& volume_name,
          const string& path,
          const org::xtreemfs::interfaces::Stat& stbuf,
          uint32_t to_set
        )
        {
          setattrRequest* __request = new setattrRequest( volume_name, path, stbuf, to_set );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<setattrResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<setattrResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<setattrResponse> __response = __response_queue->dequeue();
        }

        virtual void
        setxattr
        (
          const string& volume_name,
          const string& path,
          const string& name,
          const string& value,
          int32_t flags
        )
        {
          setxattrRequest* __request = new setxattrRequest( volume_name, path, name, value, flags );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<setxattrResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<setxattrResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<setxattrResponse> __response = __response_queue->dequeue();
        }

        virtual void
        statvfs
        (
          const string& volume_name,
          uint64_t known_etag,
          org::xtreemfs::interfaces::StatVFSSet& stbuf
        )
        {
          statvfsRequest* __request = new statvfsRequest( volume_name, known_etag );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<statvfsResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<statvfsResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<statvfsResponse> __response = __response_queue->dequeue();
          stbuf = __response->get_stbuf();
        }

        virtual void
        symlink
        (
          const string& volume_name,
          const string& target_path,
          const string& link_path
        )
        {
          symlinkRequest* __request = new symlinkRequest( volume_name, target_path, link_path );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<symlinkResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<symlinkResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<symlinkResponse> __response = __response_queue->dequeue();
        }

        virtual void
        unlink
        (
          const string& volume_name,
          const string& path,
          org::xtreemfs::interfaces::FileCredentialsSet& file_credentials
        )
        {
          unlinkRequest* __request = new unlinkRequest( volume_name, path );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<unlinkResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<unlinkResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<unlinkResponse> __response = __response_queue->dequeue();
          file_credentials = __response->get_file_credentials();
        }

        virtual void xtreemfs_checkpoint()
        {
          xtreemfs_checkpointRequest* __request = new xtreemfs_checkpointRequest;

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_checkpointResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_checkpointResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_checkpointResponse> __response = __response_queue->dequeue();
        }

        virtual void
        xtreemfs_check_file_exists
        (
          const string& volume_id,
          const org::xtreemfs::interfaces::StringSet& file_ids,
          const string& osd_uuid,
          string& bitmap
        )
        {
          xtreemfs_check_file_existsRequest* __request = new xtreemfs_check_file_existsRequest( volume_id, file_ids, osd_uuid );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_check_file_existsResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_check_file_existsResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_check_file_existsResponse> __response = __response_queue->dequeue();
          bitmap = __response->get_bitmap();
        }

        virtual void xtreemfs_dump_database( const string& dump_file )
        {
          xtreemfs_dump_databaseRequest* __request = new xtreemfs_dump_databaseRequest( dump_file );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_dump_databaseResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_dump_databaseResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_dump_databaseResponse> __response = __response_queue->dequeue();
        }

        virtual void
        xtreemfs_get_suitable_osds
        (
          const string& file_id,
          uint32_t num_osds,
          org::xtreemfs::interfaces::StringSet& osd_uuids
        )
        {
          xtreemfs_get_suitable_osdsRequest* __request = new xtreemfs_get_suitable_osdsRequest( file_id, num_osds );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_get_suitable_osdsResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_get_suitable_osdsResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_get_suitable_osdsResponse> __response = __response_queue->dequeue();
          osd_uuids = __response->get_osd_uuids();
        }

        virtual void xtreemfs_internal_debug( const string& operation, string& result )
        {
          xtreemfs_internal_debugRequest* __request = new xtreemfs_internal_debugRequest( operation );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_internal_debugResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_internal_debugResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_internal_debugResponse> __response = __response_queue->dequeue();
          result = __response->get_result();
        }

        virtual void xtreemfs_lsvol( org::xtreemfs::interfaces::StatVFSSet& volumes )
        {
          xtreemfs_lsvolRequest* __request = new xtreemfs_lsvolRequest;

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_lsvolResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_lsvolResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_lsvolResponse> __response = __response_queue->dequeue();
          volumes = __response->get_volumes();
        }

        virtual void xtreemfs_mkvol( const org::xtreemfs::interfaces::StatVFS& volume )
        {
          xtreemfs_mkvolRequest* __request = new xtreemfs_mkvolRequest( volume );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_mkvolResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_mkvolResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_mkvolResponse> __response = __response_queue->dequeue();
        }

        virtual void
        xtreemfs_renew_capability
        (
          const org::xtreemfs::interfaces::XCap& old_xcap,
          org::xtreemfs::interfaces::XCap& renewed_xcap
        )
        {
          xtreemfs_renew_capabilityRequest* __request = new xtreemfs_renew_capabilityRequest( old_xcap );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_renew_capabilityResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_renew_capabilityResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_renew_capabilityResponse> __response = __response_queue->dequeue();
          renewed_xcap = __response->get_renewed_xcap();
        }

        virtual void xtreemfs_replication_to_master()
        {
          xtreemfs_replication_to_masterRequest* __request = new xtreemfs_replication_to_masterRequest;

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_replication_to_masterResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_replication_to_masterResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_replication_to_masterResponse> __response = __response_queue->dequeue();
        }

        virtual void
        xtreemfs_replica_add
        (
          const string& file_id,
          const org::xtreemfs::interfaces::Replica& new_replica
        )
        {
          xtreemfs_replica_addRequest* __request = new xtreemfs_replica_addRequest( file_id, new_replica );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_replica_addResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_replica_addResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_replica_addResponse> __response = __response_queue->dequeue();
        }

        virtual void
        xtreemfs_replica_list
        (
          const string& file_id,
          org::xtreemfs::interfaces::ReplicaSet& replicas
        )
        {
          xtreemfs_replica_listRequest* __request = new xtreemfs_replica_listRequest( file_id );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_replica_listResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_replica_listResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_replica_listResponse> __response = __response_queue->dequeue();
          replicas = __response->get_replicas();
        }

        virtual void
        xtreemfs_replica_remove
        (
          const string& file_id,
          const string& osd_uuid,
          org::xtreemfs::interfaces::XCap& delete_xcap
        )
        {
          xtreemfs_replica_removeRequest* __request = new xtreemfs_replica_removeRequest( file_id, osd_uuid );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_replica_removeResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_replica_removeResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_replica_removeResponse> __response = __response_queue->dequeue();
          delete_xcap = __response->get_delete_xcap();
        }

        virtual void xtreemfs_restore_database( const string& dump_file )
        {
          xtreemfs_restore_databaseRequest* __request = new xtreemfs_restore_databaseRequest( dump_file );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_restore_databaseResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_restore_databaseResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_restore_databaseResponse> __response = __response_queue->dequeue();
        }

        virtual void
        xtreemfs_restore_file
        (
          const string& file_path,
          const string& file_id,
          uint64_t file_size,
          const string& osd_uuid,
          int32_t stripe_size
        )
        {
          xtreemfs_restore_fileRequest* __request = new xtreemfs_restore_fileRequest( file_path, file_id, file_size, osd_uuid, stripe_size );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_restore_fileResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_restore_fileResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_restore_fileResponse> __response = __response_queue->dequeue();
        }

        virtual void xtreemfs_rmvol( const string& volume_name )
        {
          xtreemfs_rmvolRequest* __request = new xtreemfs_rmvolRequest( volume_name );

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_rmvolResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_rmvolResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_rmvolResponse> __response = __response_queue->dequeue();
        }

        virtual void xtreemfs_shutdown()
        {
          xtreemfs_shutdownRequest* __request = new xtreemfs_shutdownRequest;

          ::yidl::runtime::auto_Object< ::yield::concurrency::ResponseQueue<xtreemfs_shutdownResponse> >
            __response_queue( new ::yield::concurrency::ResponseQueue<xtreemfs_shutdownResponse> );
          __request->set_response_target( &__response_queue.get() );

          __event_target->send( *__request );

          ::yidl::runtime::auto_Object<xtreemfs_shutdownResponse> __response = __response_queue->dequeue();
        }

        void set_event_target( ::yield::concurrency::EventTarget& event_target )
        {
          this->__event_target = &event_target;
        }

      private:
        // __event_target is not a counted reference, since that would create
        // a reference cycle when __event_target is a subclass of EventSender
        ::yield::concurrency::EventTarget* __event_target;
      };
    };
  };
};
#endif
