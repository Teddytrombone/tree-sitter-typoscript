import XCTest
import SwiftTreeSitter
import TreeSitterTyposcript

final class TreeSitterTyposcriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_typoscript())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading TypoScript grammar")
    }
}
