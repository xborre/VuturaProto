@0xd6754c7d1ed0b666;

interface TagsService {
    getTags @0 (tagIn :Tag) -> (tags :Tags);

    struct Tag {
        timestamp @0 :UInt32;
        location @1 :Location;
        fenceInfo @2 :Fence;
        id @3 :UInt32;
        type @4 :Type;

        struct Location {
            latitude @0 :Float64;
            longitude @1 :Float64;
            altitude @2 :Float64;
        }

        struct Fence {
            radius @0 :UInt32;
            upper @1 :UInt32;
            lower @2 :UInt32;
        }

        enum Type {
            fireFighter @0;
            fireTruck @1;
        }
    }

    struct Tags {
        tags @0 :List(Tag);
    }

    getWarning @1 (warningIn :Warning) -> (warning :Warnings);

    struct Warning {
        timestamp @0 :UInt32;
        id @1 :UInt32;
        distance @2 :Float64;
    }

    struct Warnings {
        warning @0 :List(Warning);
    }
}
